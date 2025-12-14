#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>
using namespace std;
bool gameOver, paused;
const int width = 40;
const int height = 20;
int x, y, foodX, foodY, score;
int tailX[100], tailY[100];
int nTail;
int speed;
int highScore = 0;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;
void BeepEat() {
    Beep(500, 420); }
void BeepGameOver() {
    Beep(400, 300);
    Beep(200, 500); }
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
void SetColor(int color) {
    SetConsoleTextAttribute(h, color);
}
// cursor movement (NO CLEAR SCREEN = STABLE BORDER)
void gotoxy(int x, int y) {
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void SaveScore() {
    ofstream file("score.txt", ios::app);
    file << "Score: " << score << endl;
    file.close();
}
void LoadHighScore() {
    ifstream file("highscore.txt");
    if (file.is_open()) {
        file >> highScore;
        file.close();
    } else {
        highScore = 0;
    }  }
void SaveHighScore() {
    if (score > highScore) {
        ofstream file("highscore.txt");
        file << score;
        file.close();
    }  }
void Setup() {
    gameOver = false;
    paused = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    foodX = rand() % (width - 2) + 1;
    foodY = rand() % (height - 2) + 1;
    score = 0;
    nTail = 0;  }
void DrawBorder() {
    system("cls");
	SetColor(1);
    for (int i = 0; i <= width + 1; i++)
        cout << "#";
    cout << endl;
    
    for (int i = 0; i < height; i++) {
        cout << "#";
        SetColor(4);
        for (int j = 0; j < width; j++)
            cout << " ";
        cout << "#" << endl;
    }
    SetColor(1);
    for (int i = 0; i <= width + 1; i++)
        cout << "#";
	SetColor(15);
    cout << "\n=========Score========= ";
    cout << "\n[P] = Pause  [X] = Exit";
    SetColor(13);
}
void Draw() {
    gotoxy(x + 1, y + 1);
    SetColor(14);
    cout << "O";
    gotoxy(foodX + 1, foodY + 1);
    SetColor(15);
    cout << "$";
	SetColor(2);
    for (int i = 0; i < nTail; i++) {
        gotoxy(tailX[i] + 1, tailY[i] + 1);
        cout << "o";
    }
    gotoxy(0, height + 4);
    SetColor(13);
    cout << "Score: " << score <<endl<< "High Score: " << highScore << "   ";
	SetColor(7);
}
void ClearTail(int px, int py) {
    gotoxy(px + 1, py + 1);
    cout << " ";
}
void Input() {
    if (_kbhit()) {
        char ch = _getch();
        if (ch == 'p' || ch == 'P')
            paused = !paused;
        switch (ch) {
        case 'a': if (dir != RIGHT) dir = LEFT; break;
        case 'd': if (dir != LEFT)  dir = RIGHT; break;
        case 'w': if (dir != DOWN)  dir = UP; break;
        case 's': if (dir != UP)    dir = DOWN; break;
        case 'x': gameOver = true; break;
        }
    }	
}
void Logic() {
    if (paused) return;
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;   }
    ClearTail(prevX, prevY);
    switch (dir) {
    case LEFT:  x--; break;
    case RIGHT: x++; break;
    case UP:    y--; break;
    case DOWN:  y++; break;
    }
    // STABLE BORDER COLLISION
    if (x < 0 || x >= width || y < 0 || y >= height)
        gameOver = true;
    // SELF COLLISION
    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            gameOver = true;
    // FOOD
    if (x == foodX && y == foodY) {
        score += 10;
        foodX = rand() % (width - 2) + 1;
        foodY = rand() % (height - 2) + 1;
        nTail++;
        BeepEat();
    }
}
int main() {
	cout<<"\n"<<endl;
    int level;
    cout << "=========Select Difficulty=========:\n1. Easy\n2. Medium\n3. Hard\nSelect : ";
    cin >> level;
    switch (level) {
    case 1: speed = 150; break;
    case 2: speed = 100; break;
    case 3: speed = 60;  break;
    default: speed = 100;
    }
    Setup();
    DrawBorder();
    while (!gameOver) {
        Input();
        Logic();
        Draw();
        Sleep(speed);
        LoadHighScore();
    }
    BeepGameOver();
    SaveScore();
	SaveHighScore();
    gotoxy(0, height + 6);
    SetColor(15);
    cout << "\n=======GAME OVER=======";
    SetColor(13);
	cout<<"\nFinal Score: " << score << endl;
	SetColor(2);
    return 0;
}


