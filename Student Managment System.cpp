#include <iostream>
#include <string>
using namespace std;

#define SUBJECTS 6
#define MAX_STUDENTS 100

// Subject structure
struct Subject {
    string subjectName;
    float marks;
    float percentage;
    float gpa;
};

// Student structure
struct Student {
    string name;
    int refNumber;
    int semester;
    Subject subjects[SUBJECTS];
    float cgpa;
};

Student students[MAX_STUDENTS];
int studentCount = 0;

// Function prototypes
void addStudent();
void displayStudent();
void displayAllStudents();
float convertMarksToGPA(float marks);
void calculateCGPA(Student &s);
void menu();

// Main function
int main() {
    menu();
    return 0;
}

// Menu-driven system
void menu() {
    int choice;

    do {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Student by Reference Number" << endl;
        cout << "3. View All Students" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudent(); break;
            case 3: displayAllStudents(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid option! Try again.\n";
        }

    } while (choice != 4);
}

// Function to add a student
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "Student limit reached!" << endl;
        return;
    }

    Student &s = students[studentCount];

    cin.ignore();  // Clear buffer
    cout << "\nEnter student name: ";
    getline(cin, s.name);

    cout << "Enter reference number: ";
    cin >> s.refNumber;

    cout << "Enter semester: ";
    cin >> s.semester;

    cin.ignore();
    cout << "\nEnter details for 6 subjects:\n";

    for (int i = 0; i < SUBJECTS; i++) {
        cout << "\nSubject " << i + 1 << " name: ";
        getline(cin, s.subjects[i].subjectName);

        cout << "Marks (0–100): ";
        cin >> s.subjects[i].marks;

        cin.ignore();

        s.subjects[i].percentage = s.subjects[i].marks;
        s.subjects[i].gpa = convertMarksToGPA(s.subjects[i].marks);
    }

    calculateCGPA(s);

    studentCount++;
    cout << "\nStudent added successfully!\n";
}

// GPA conversion function
float convertMarksToGPA(float marks) {
    if (marks >= 90) return 4.0;
    else if (marks >= 80) return 3.7;
    else if (marks >= 70) return 3.0;
    else if (marks >= 60) return 2.0;
    else if (marks >= 50) return 1.0;
    else return 0.0;
}

// CGPA calculator
void calculateCGPA(Student &s) {
    float total = 0;

    for (int i = 0; i < SUBJECTS; i++) {
        total += s.subjects[i].gpa;
    }

    s.cgpa = total / SUBJECTS;
}

// Display details of one student
void displayStudent() {
    int ref;
    cout << "Enter reference number: ";
    cin >> ref;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].refNumber == ref) {
            Student &s = students[i];

            cout << "\n--- STUDENT DETAILS ---\n";
            cout << "Name: " << s.name << endl;
            cout << "Reference Number: " << s.refNumber << endl;
            cout << "Semester: " << s.semester << endl;

            cout << "\nSubjects:\n";
            for (int j = 0; j < SUBJECTS; j++) {
                cout << j + 1 << ". " << s.subjects[j].subjectName
                     << " | Marks: " << s.subjects[j].marks
                     << " | Percentage: " << s.subjects[j].percentage
                     << " | GPA: " << s.subjects[j].gpa << endl;
            }

            cout << "\nOverall CGPA: " << s.cgpa << endl;
            return;
        }
    }

    cout << "Student not found!\n";
}

// Display all students
void displayAllStudents() {
    if (studentCount == 0) {
        cout << "No students available.\n";
        return;
    }

    cout << "\n===== ALL STUDENTS =====\n";
    for (int i = 0; i < studentCount; i++) {
        cout << i + 1 << ". " << students[i].name
             << " (Ref: " << students[i].refNumber
             << ") | Semester: " << students[i].semester
             << " | CGPA: " << students[i].cgpa << endl;
    }
}

