#include <iostream>
using namespace std;
int main()
{
    int choice, score, choice1, choice2, ans;
    char again;
    cout<<"=========================================="<<endl;
    cout<<"             WELCOME TO"<<endl;
    cout<<"          MENTES DEL MUNDO"<<endl;
    cout<<"=========================================="<<endl;
    cout<<endl;
    cout<<"Test your knowledge about the world!"<<endl;
    cout<<"\n------------------------------------------"<<endl;
    do {
    cout<<"\n\nSelect a game mode!"<<endl;
    cout<<"\n\n1-Capital Quest"<<endl;
    cout<<"2-Country Hunt"<<endl;
    cout<<"0-Press 0 to Exit"<<endl;
    cout<<"\nEnter your choice (0-2)"<<endl;
    cin>>choice;
    switch (choice){
    case 1:
    cout<<"================================"<<endl;
    cout<<"       Capital Quest"<<endl;
    cout<<"================================"<<endl;
    cout<<"\n Select a difficulty level below : "<<endl;
    cout<<"\n1-Easy \n2-Medium \n3-Difficult"<<endl;
    cout<<"4-Exit"<<endl;
    cout<<"\nEnter your choice (1-4)"<<endl;
    cin>>choice1;
    score=0;
    switch (choice1){
    case 1:
    cout<<"\nQ1-The capital of India is : "<<endl;
    cout<<"1-Kabul \n2-Islamabad \n3-New Delhi \n4-Tehran"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if (ans == 3){cout<<"\nYour answer is correct!"<<endl;score++;} 
	else {cout<<"Incorrect! The capital of India is New Delhi"<<endl;}
    cout<<"\nQ2-The capital of Pakistan is:"<<endl;
    cout<<"1-Islamabad \n2-Karachi \n3-Lahore \n4-Peshawar"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"\nYour answer is correct!"<<endl;score++;}
	else{cout<<"Incorrect! The capital of Pakistan is Islamabad"<<endl;}
    cout<<"\nQ3-The capital of China is:"<<endl;
    cout<<"1-Tokyo \n2-Beijing \n3-Seoul \n4-Hanoi"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"\nYour answer is correct!"<<endl;score++;}
	else{cout<<"Incorrect! The capital of China is Beijing"<<endl;}
    cout<<"\nQ4-The capital of Japan is:"<<endl;
    cout<<"1-Tokyo \n2-Beijing \n3-Seoul \n4-Bangkok"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"\nYour answer is correct!"<<endl;score++;}
	else{cout<<"Incorrect! The capital of Japan is Tokyo"<<endl;}
    cout<<"\nQ5-The capital of France is:"<<endl;
    cout<<"1-Madrid \n2-London \n3-Paris \n4-Rome"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==3){cout<<"\nYour answer is correct!"<<endl;score++;}
	else{cout<<"Incorrect! The capital of France is Paris"<<endl;}
    cout<<"\nQ6-The capital of Italy is:"<<endl;
    cout<<"1-Madrid \n2-Rome \n3-Vienna \n4-Paris"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"\nYour answer is correct!"<<endl;score++;}
	else{cout<<"Incorrect! The capital of Italy is Rome"<<endl;}
    cout<<"\nQ7-The capital of Canada is:"<<endl;
    cout<<"1-Ottawa \n2-Toronto \n3-Vancouver \n4-Montreal"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"\nYour answer is correct!"<<endl;score++;}
	else{cout<<"Incorrect! The capital of Canada is Ottawa"<<endl;}
    cout<<"\nQ8-The capital of Australia is:"<<endl;
    cout<<"1-Sydney \n2-Canberra \n3-Melbourne \n4-Perth"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"\nYour answer is correct!"<<endl;score++;}
	else{cout<<"Incorrect! The capital of Australia is Canberra"<<endl;}
    cout<<"\nQ9-The capital of Germany is:"<<endl;
    cout<<"1-Berlin \n2-Munich \n3-Frankfurt \n4-Hamburg"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"\nYour answer is correct!"<<endl;score++;}
	else{cout<<"Incorrect! The capital of Germany is Berlin"<<endl;}
    cout<<"\nQ10-The capital of Turkey is:"<<endl;
    cout<<"1-Ankara \n2-Istanbul \n3-Izmir \n4-Bursa"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"\nYour answer is correct!"<<endl;score++;}
	else{cout<<"Incorrect! The capital of Turkey is Ankara"<<endl;}
    cout<<"\nYour score is:"<<score<<"/10"<<endl;
    break;
    case 2:
    cout<<"\n(MEDIUM LEVEL QUESTIONS OF CAPITAL QUEST)"<<endl;
    score=0;
    cout<<"\nQ1-The capital of Brazil is:"<<endl;
    cout<<"1-Rio de Janeiro \n2-Brasilia \n3-Sao Paulo \n4-Lima"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"Correct!"<<endl;score++;}else
	{cout<<"Incorrect! Brasilia"<<endl;}
    cout<<"\nQ2-The capital of Argentina is:"<<endl;
    cout<<"1-Buenos Aires \n2-Santiago \n3-Lima \n4-Caracas"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}else
	{cout<<"Incorrect! Buenos Aires"<<endl;}
    cout<<"\nQ3-The capital of Norway is:"<<endl;
    cout<<"1-Stockholm \n2-Oslo \n3-Copenhagen \n4-Helsinki"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Oslo"<<endl;}
    cout<<"\nQ4-The capital of Egypt is:"<<endl;
    cout<<"1-Cairo \n2-Tripoli \n3-Khartoum \n4-Tunis"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Cairo"<<endl;}
    cout<<"\nQ5-The capital of Kenya is:"<<endl;
    cout<<"1-Nairobi \n2-Kigali \n3-Accra \n4-Dar es Salaam"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Nairobi"<<endl;}
    cout<<"\nQ6-The capital of Spain is:"<<endl;
    cout<<"1-Barcelona \n2-Madrid \n3-Seville \n4-Valencia"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Madrid"<<endl;}
    cout<<"\nQ7-The capital of Thailand is:"<<endl;
    cout<<"1-Bangkok \n2-Hanoi \n3-Manila \n4-Kuala Lumpur"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Bangkok"<<endl;}
    cout<<"\nQ8-The capital of Switzerland is:"<<endl;
    cout<<"1-Geneva \n2-Bern \n3-Zurich \n4-Lucerne"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Bern"<<endl;}
    cout<<"\nQ9-The capital of Saudi Arabia is:"<<endl;
    cout<<"1-Riyadh \n2-Jeddah \n3-Dammam \n4-Madina"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Riyadh"<<endl;}
    cout<<"\nQ10-The capital of Colombia is:"<<endl;
    cout<<"1-Bogota \n2-Caracas \n3-Quito \n4-Lima"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Bogota"<<endl;}
    cout<<"\nYour score is:"<<score<<"/10"<<endl;
    break;
    case 3:
    cout<<"\n(DIFFICULT LEVEL QUESTIONS OF CAPITAL QUEST)"<<endl;
    score=0;
    cout<<"\nQ1-The capital of Kazakhstan is:"<<endl;
    cout<<"1-Astana \n2-Almaty \n3-Tashkent \n4-Baku"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Astana"<<endl;}
    cout<<"\nQ2-The capital of Uzbekistan is:"<<endl;
    cout<<"1-Tashkent \n2-Ashgabat \n3-Dushanbe \n4-Bishkek"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Tashkent"<<endl;}
    cout<<"\nQ3-The capital of Azerbaijan is:"<<endl;
    cout<<"1-Baku \n2-Yerevan \n3-Tbilisi \n4-Astana"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Baku"<<endl;}
    cout<<"\nQ4-The capital of Bhutan is:"<<endl;
    cout<<"1-Thimphu \n2-Kathmandu \n3-Paro \n4-Lhasa"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Thimphu"<<endl;}
    cout<<"\nQ5-The capital of Eritrea is:"<<endl;
    cout<<"1-Asmara \n2-Khartoum \n3-Addis Ababa \n4-Tripoli"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Asmara"<<endl;}
    cout<<"\nQ6-The capital of Madagascar is:"<<endl;
    cout<<"1-Antananarivo \n2-Moroni \n3-Port Louis \n4-Nouakchott"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}else{cout<<"Incorrect! Antananarivo"<<endl;}
    cout<<"\nQ7-The capital of Belize is:"<<endl;
    cout<<"1-Belmopan \n2-Belize City \n3-Guatemala City \n4-San Salvador"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Belmopan"<<endl;}
    cout<<"\nQ8-The capital of Fiji is:"<<endl;
    cout<<"1-Suva \n2-Nadi \n3-Apia \n4-Port Moresby"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Suva"<<endl;}
    cout<<"\nQ9-The capital of Latvia is:"<<endl;
    cout<<"1-Riga \n2-Vilnius \n3-Tallinn \n4-Helsinki"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Riga"<<endl;}
    cout<<"\nQ10-The capital of Slovenia is:"<<endl;
    cout<<"1-Ljubljana \n2-Zagreb \n3-Bratislava \n4-Budapest"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Ljubljana"<<endl;}
    cout<<"\nYour score is:"<<score<<"/10"<<endl;
    break;
    default:
    cout<<"Invalid difficulty option!"<<endl;
    }
    break;
    case 2:
    cout<<"================================"<<endl;
    cout<<"       Country Hunt"<<endl;
    cout<<"================================"<<endl;
    cout<<"\n Select a difficulty level below : "<<endl;
    cout<<"\n1-Easy \n2-Medium \n3-Difficult"<<endl;
    cout<<"4-Exit"<<endl;
    cout<<"\nEnter your choice (1-4)"<<endl;
    cin>>choice2;
    score=0;
    switch(choice2){
    case 1:
    cout<<"\nQ1-New Delhi is the capital of??"<<endl;
    cout<<"1-Pakistan\n2-India\n3-Nepal\n4-Bangladesh"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! India"<<endl;}
    cout<<"\nQ2-Islamabad is the capital of??"<<endl;
    cout<<"1-Afghanistan\n2-Iran\n3-Pakistan\n4-Turkey"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==3){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Pakistan"<<endl;}
    cout<<"\nQ3-Canberra is the capital of??"<<endl;
    cout<<"1-New Zealand\n2-Australia\n3-Canada\n4-USA"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Australia"<<endl;}
    cout<<"\nQ4-Beijing is the capital of??"<<endl;
    cout<<"1-China\n2-Japan\n3-Korea\n4-Vietnam"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! China"<<endl;}
    cout<<"\nQ5-Kathmandu is the capital of??"<<endl;
    cout<<"1-Bhutan\n2-Nepal\n3-Myanmar\n4-Thailand"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Nepal"<<endl;}
    cout<<"\nQ6-Tokyo is the capital of??"<<endl;
    cout<<"1-Japan\n2-China\n3-South Korea\n4-Taiwan"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Japan"<<endl;}
    cout<<"\nQ7-Paris is the capital of??"<<endl;
    cout<<"1-Germany\n2-France\n3-Italy\n4-Spain"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! France"<<endl;}
    cout<<"\nQ8-London is the capital of??"<<endl;
    cout<<"1-Scotland\n2-England\n3-Ireland\n4-Wales"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! England"<<endl;}
    cout<<"\nQ9-Cairo is the capital of??"<<endl;
    cout<<"1-Morocco\n2-Egypt\n3-Tunisia\n4-Libya"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Egypt"<<endl;}
    cout<<"\nQ10-Washington D.C. is the capital of??"<<endl;
    cout<<"1-Canada\n2-USA\n3-Mexico\n4-Brazil"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! USA"<<endl;}
    cout<<"\nYour score is:"<<score<<"/10"<<endl;
    break;
    case 2:
    cout<<"\n(MEDIUM LEVEL QUESTIONS OF COUNTRY HUNT)"<<endl;
    score=0;
    cout<<"\nQ1-Ottawa is the capital of??"<<endl;
    cout<<"1-Australia\n2-Canada\n3-USA\n4-UK"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Canada"<<endl;}
    cout<<"\nQ2-Rome is the capital of??"<<endl;
    cout<<"1-Greece\n2-Spain\n3-Italy\n4-France"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==3){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Italy"<<endl;}
    cout<<"\nQ3-Ankara is the capital of??"<<endl;
    cout<<"1-Turkey\n2-Iran\n3-Syria\n4-Iraq"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Turkey"<<endl;}
    cout<<"\nQ4-Bern is the capital of??"<<endl;
    cout<<"1-Austria\n2-Switzerland\n3-Germany\n4-Denmark"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Switzerland"<<endl;}
    cout<<"\nQ5-Riyadh is the capital of??"<<endl;
    cout<<"1-UAE\n2-Egypt\n3-Saudi Arabia\n4-Qatar"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==3){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Saudi Arabia"<<endl;}
    cout<<"\nQ6-Bogota is the capital of??"<<endl;
    cout<<"1-Colombia\n2-Venezuela\n3-Ecuador\n4-Peru"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Colombia"<<endl;}
    cout<<"\nQ7-Nairobi is the capital of??"<<endl;
    cout<<"1-Tanzania\n2-Kenya\n3-Uganda\n4-Rwanda"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Kenya"<<endl;}
    cout<<"\nQ8-The Hague is the seat of government of which country??"<<endl;
    cout<<"1-Netherlands\n2-Belgium\n3-Denmark\n4-Sweden"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Netherlands"<<endl;}
    cout<<"\nQ9-Madrid is the capital of??"<<endl;
    cout<<"1-Portugal\n2-Spain\n3-Morocco\n4-Italy"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==2){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Spain"<<endl;}
    cout<<"\nQ10-Canberra is the capital of which country??"<<endl;
    cout<<"1-Australia\n2-New Zealand\n3-Canada\n4-USA"<<endl;
    cout<<"Choose your option (1-4)"<<endl;
    cin>>ans;
    if(ans==1){cout<<"Correct!"<<endl;score++;}
	else{cout<<"Incorrect! Australia"<<endl;}
    cout<<"\nYour score is:"<<score<<"/10"<<endl;
    break;
    case 3:
    cout<<"\n(DIFFICULT LEVEL QUESTIONS OF CAPITAL QUEST)"<<endl;
score=0;
cout<<"\nQ1-The capital of Norway is??"<<endl;
cout<<"1-Stockholm\n2-Copenhagen\n3-Oslo\n4-Helsinki"<<endl;
cout<<"Choose your option (1-4)"<<endl;
cin>>ans;
if(ans==3){cout<<"Correct!"<<endl;score++;}
else{cout<<"Incorrect! Oslo"<<endl;}

cout<<"\nQ2-The capital of South Africa is??"<<endl;
cout<<"1-Cape Town\n2-Pretoria\n3-Bloemfontein\n4-All of these"<<endl;
cout<<"Choose your option (1-4)"<<endl;
cin>>ans;
if(ans==4){cout<<"Correct!"<<endl;score++;}
else{cout<<"Incorrect! All of these"<<endl;}

cout<<"\nQ3-The capital of Switzerland is??"<<endl;
cout<<"1-Zurich\n2-Bern\n3-Geneva\n4-Basel"<<endl;
cout<<"Choose your option (1-4)"<<endl;
cin>>ans;
if(ans==2){cout<<"Correct!"<<endl;score++;}
else{cout<<"Incorrect! Bern"<<endl;}

cout<<"\nQ4-The capital of Canada is??"<<endl;
cout<<"1-Toronto\n2-Ottawa\n3-Vancouver\n4-Montreal"<<endl;
cout<<"Choose your option (1-4)"<<endl;
cin>>ans;
if(ans==2){cout<<"Correct!"<<endl;score++;}
else{cout<<"Incorrect! Ottawa"<<endl;}

cout<<"\nQ5-The capital of New Zealand is??"<<endl;
cout<<"1-Auckland\n2-Wellington\n3-Christchurch\n4-Hamilton"<<endl;
cout<<"Choose your option (1-4)"<<endl;
cin>>ans;
if(ans==2){cout<<"Correct!"<<endl;score++;}
else{cout<<"Incorrect! Wellington"<<endl;}

cout<<"\nQ6-The capital of Saudi Arabia is??"<<endl;
cout<<"1-Dubai\n2-Riyadh\n3-Jeddah\n4-Abu Dhabi"<<endl;
cout<<"Choose your option (1-4)"<<endl;
cin>>ans;
if(ans==2){cout<<"Correct!"<<endl;score++;}
else{cout<<"Incorrect! Riyadh"<<endl;}

cout<<"\nQ7-The capital of Hungary is??"<<endl;
cout<<"1-Budapest\n2-Prague\n3-Bratislava\n4-Bucharest"<<endl;
cout<<"Choose your option (1-4)"<<endl;
cin>>ans;
if(ans==1){cout<<"Correct!"<<endl;score++;}
else{cout<<"Incorrect! Budapest"<<endl;}

cout<<"\nQ8-The capital of Argentina is??"<<endl;
cout<<"1-Buenos Aires\n2-Santiago\n3-Lima\n4-Montevideo"<<endl;
cout<<"Choose your option (1-4)"<<endl;
cin>>ans;
if(ans==1){cout<<"Correct!"<<endl;score++;}
else{cout<<"Incorrect! Buenos Aires"<<endl;}

cout<<"\nQ9-The capital of Kenya is??"<<endl;
cout<<"1-Nairobi\n2-Addis Ababa\n3-Dar es Salaam\n4-Kampala"<<endl;
cout<<"Choose your option (1-4)"<<endl;
cin>>ans;
if(ans==1){cout<<"Correct!"<<endl;score++;}
else{cout<<"Incorrect! Nairobi"<<endl;}

cout<<"\nQ10-The capital of Ukraine is??"<<endl;
cout<<"1-Kharkiv\n2-Kyiv\n3-Odessa\n4-Lviv"<<endl;
cout<<"Choose your option (1-4)"<<endl;
cin>>ans;
if(ans==2){cout<<"Correct!"<<endl;score++;}
else{cout<<"Incorrect! Kyiv"<<endl;}

cout<<"\nYour score is: "<<score<<"/10"<<endl;

    cout<<"\nYour score is:"<<score<<"/10"<<endl;
    break;
    default:
    cout<<"Invalid difficulty option!"<<endl;
    }
    break;
    case 0:
    cout<<"\nThanks for giving MENTES DEL MUNDO a try!"<<endl;
    break;
    default:
    cout<<"You entered an invalid number! Please enter from 0-2"<<endl;
    }
    if(choice!=0){
    cout<<"\n\nWanna play another round?? (y/n)"<<endl;
    cin>>again;
    if(again=='n'||again=='N')
    break;
    }
    }while (choice != 0);
    return 0;
}

