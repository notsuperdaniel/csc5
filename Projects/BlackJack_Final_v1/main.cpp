/* 
 * File:   main.cpp
 * Author: Daniel Garcia
 * Created on February 2, 2019, 10:00 AM
 * Purpose:  BlackJack V13
 */

//System Libraries Here
#include <iostream>
#include <cstdlib> //Random Number Generator
#include <ctime>  //Used with Random Number Generator
#include <fstream>// I/O Library
#include <cmath> //Math Library
#include <iomanip> //formatting Library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void randNum(int [],int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set The Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    int sum,dsum; //The players cards as numbers
     int const CARD=12;
    int rand[CARD];
   
    char ace, dace,choice,start; //Players Ace, Dealers Ace
    string let1,let2, let3, let4,let5,let6 //Players cards as string
            ,dlet1,dlet2,dlet3,dlet4,dlet5,dlet6;//Dealers Cards as string
    bool cont=true,goDeal=false; 
    ofstream out;//Output file
    out.open("wins.txt");
    
          
   //Start of Game
    
   
   //Start Screen
   cout<<"Welcome to BlackJack! To get started, input 'S'"<<endl;
   cin>>start;                            //User enters (S) to start the game
   //Checks to make sure user inputs (S)
    while (start != 's' && start != 'S') //If answer isn't (S), show prompt
{
     cout << "Invalid Input, must be either S or s;"<<endl;
     cout << "Welcome to BlackJack! To get started, input 'S'"<<endl;
     cin >> start;
} 
    
   if(start=='S'||start=='s') { //If user inputs (S) start game
       cout<<"--------------------------------------------------------"<<endl;
        do{          //If User wants to play again, restarts here
                sum=0;
                dsum=0;
      //Card Generators


   
          
   //Start of Game
    
   
   randNum(rand,CARD); //rand[0-14



          
         cont=true;   
        
    //Value for Card 1
    if (rand[0]==11||rand[0]==1) let1="Ace";
    if (rand[0]==2)rand[0]=2 ,let1="Two";
    if (rand[0]==3)rand[0]=3 ,let1="Three";
    if (rand[0]==4)rand[0]=4 ,let1="Four";
    if (rand[0]==5)rand[0]=5 ,let1="Five";
    if (rand[0]==6)rand[0]=6 ,let1="Six";
    if (rand[0]==7||rand[0]==7) let1="Seven";    
    if (rand[0]==8)rand[0]=8 ,let1="Eight";
    if (rand[0]==9)rand[0]=9 ,let1="Nine";
    if (rand[0]==10)rand[0]=10 ,let1="Ten";    
    if (rand[0]==12)rand[0]=10 ,let1="Jack";
    if (rand[0]==13)rand[0]=10 ,let1="Queen";
    if (rand[0]==14)rand[0]=10 ,let1="King";
         
    //Value for Card 2
    if (rand[1]==11||rand[1]==1) let2="Ace";
    if (rand[1]==2)rand[1]=2 ,let2="Two";
    if (rand[1]==3)rand[1]=3 ,let2="Three";
    if (rand[1]==4)rand[1]=4 ,let2="Four";
    if (rand[1]==5)rand[1]=5 ,let2="Five";
    if (rand[1]==6)rand[1]=6 ,let2="Six";
    if (rand[1]==7||rand[1]==7) let2="Seven";    
    if (rand[1]==8)rand[1]=8 ,let2="Eight";
    if (rand[1]==9)rand[1]=9 ,let2="Nine";
    if (rand[1]==10)rand[1]=10 ,let2="Ten";    
    if (rand[1]==12)rand[1]=10 ,let2="Jack";
    if (rand[1]==13)rand[1]=10 ,let2="Queen";
    if (rand[1]==14)rand[1]=10 ,let2="King";
   
    //Dealers 1st Card
    if (rand[6]==11||rand[6]==1) dlet1="Ace";
    if (rand[6]==2)rand[6]=2 ,dlet1="Two";
    if (rand[6]==3)rand[6]=3 ,dlet1="Three";
    if (rand[6]==4)rand[6]=4 ,dlet1="Four";
    if (rand[6]==5)rand[6]=5 ,dlet1="Five";
    if (rand[6]==6)rand[6]=6 ,dlet1="Six";
    if (rand[6]==7||rand[6]==7) dlet1="Seven";    
    if (rand[6]==8)rand[6]=8 ,dlet1="Eight";
    if (rand[6]==9)rand[6]=9 ,dlet1="Nine";
    if (rand[6]==10)rand[6]=10 ,dlet1="Ten";    
    if (rand[6]==12)rand[6]=10 ,dlet1="Jack";
    if (rand[6]==13)rand[6]=10 ,dlet1="Queen";
    if (rand[6]==14)rand[6]=10 ,dlet1="King";
    
    //Output the face of the cards 
    cout<<"Card 1 = "<<let1<<endl;
    cout<<"Card 2 = "<<let2<<endl;
    cout<<"Dealers Card is "<<dlet1<<endl;
    
    
    if(cont){
   //Ask User if they want to hit
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"Would you like to hit?-Input 'Y' for yes and 'N' for no"<<endl;
    cin>>choice;
      //Validate User Input
      while (choice != 'Y' && choice != 'y' && choice !='N' && choice != 'n'){
         cout<<"--------------------------------------------------------"<<endl;
         cout << "Invalid Input, must be either Y or N ;"<<endl;
         cout << "Would you like to hit?-Input 'Y' for yes and 'N' for no"<<endl;
         cin >> choice;
}  
    //If user inputs Y, start of 3rd card
      switch(choice){
          case 'y':
          case 'Y' :{
            if (rand[2]==11||rand[2]==1) let3="Ace";
            if (rand[2]==2)rand[2]=2 ,let3="Two";
            if (rand[2]==3)rand[2]=3 ,let3="Three";
            if (rand[2]==4)rand[2]=4 ,let3="Four";
            if (rand[2]==5)rand[2]=5 ,let3="Five";
            if (rand[2]==6)rand[2]=6 ,let3="Six";
            if (rand[2]==7||rand[2]==7) let3="Seven";    
            if (rand[2]==8)rand[2]=8 ,let3="Eight";
            if (rand[2]==9)rand[2]=9 ,let3="Nine";
            if (rand[2]==10)rand[2]=10 ,let3="Ten";    
            if (rand[2]==12)rand[2]=10 ,let3="Jack";
            if (rand[2]==13)rand[2]=10 ,let3="Queen";
            if (rand[2]==14)rand[2]=10 ,let3="King";
           
    //Display the face of the 3 cards
    cout<<"Card 1 = "<<let1<<endl;
    cout<<"Card 2 = "<<let2<<endl;
    cout<<"Card 3 = "<<let3<<endl;
    
    cout<<"Dealers Card is "<<dlet1<<endl; //Display the Dealers Card
     break; }
          //If User inputs (N)
         case 'n':
         case 'N':{
         cout<<"--------------------------------------------------------"<<endl;
         cout<<"You decided to stay"<<endl;
         cout<<endl;
         //If card 1 is an Ace
         if (let1=="Ace"){ cout<<"Card 1 is an Ace!"<<endl;
         cout<<"If you would like the value to = '11', input Y. If you would "
            "like the value to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
     while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[0]=11; //If (Y) Ace equals 11
    else if( ace=='N'||ace=='n') rand[0]=1;//If (N) Ace equals 1
    }
    //If Card 2 Ace
    if (let2=="Ace"){ cout<<"Card 2 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
    while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[1]=11;           //If (Y) Card 2 Ace=11
    else if( ace=='N'||ace=='n') rand[1]=1;       //If (N) Card 2 Ace=1
    }
       
        sum=rand[0]+rand[1];                        //Math for sum of the 2 cards
        cout<<"Card 1 = "<<setw(2)<<rand[0]<<endl;         //Shows Card 1 Value
        cout<<"Card 2 = "<<setw(2)<<rand[1]<<endl;         //Shows Card 2 Value
        cout<<"Sum = "<<setw(2)<<sum<<endl;              //DIsplays Sum 
        cout<<"Dealers card is "<<dlet1<<endl;  //Shows Dealers Card
        cont=false;            //Doesn't ask to hit or stay again
        goDeal=true;           //Goes to Dealers turn
    }
      }
    }
    //01234567890123456789012345678012345678901234567890123456789012345678901234
    //47474747474747474747474747474747474747474747474747474747474747474747474747
    
      if(cont){
    //Ask User if they want to hit
      cout<<"--------------------------------------------------------"<<endl;
      cout<<"Would you like to hit?-Input 'Y' for yes and 'N' for no"<<endl;
       cin>>choice;
       while (choice != 'Y' && choice != 'y' && choice !='N' && choice != 'n'){
         cout<<"--------------------------------------------------------"<<endl;
         cout << "Invalid Input, must be either Y or N ;"<<endl;
        cout << "Would you like to hit?-Input 'Y' for yes and 'N' for no"<<endl;
         cin >> choice;
}     //If (Y), Start of 4th Card
      if(choice=='Y'||choice=='y'){
            if (rand[3]==11||rand[3]==1) let4="Ace";
            if (rand[3]==2)rand[3]=2 ,let4="Two";
            if (rand[3]==3)rand[3]=3 ,let4="Three";
            if (rand[3]==4)rand[3]=4 ,let4="Four";
            if (rand[3]==5)rand[3]=5 ,let4="Five";
            if (rand[3]==6)rand[3]=6 ,let4="Six";
            if (rand[3]==7||rand[3]==7) let4="Seven";    
            if (rand[3]==8)rand[3]=8 ,let4="Eight";
            if (rand[3]==9)rand[3]=9 ,let4="Nine";
            if (rand[3]==10)rand[3]=10 ,let4="Ten";    
            if (rand[3]==12)rand[3]=10 ,let4="Jack";
            if (rand[3]==13)rand[3]=10 ,let4="Queen";
            if (rand[3]==14)rand[3]=10 ,let4="King";
        //Display the face of the 4 cards  
    cout<<"Card 1 = "<<let1<<endl;
    cout<<"Card 2 = "<<let2<<endl;
    cout<<"Card 3 = "<<let3<<endl;     
    cout<<"Card 4 = "<<let4<<endl;
    cout<<"Dealers Card is "<<dlet1<<endl;
      }
      //If User Input (N) to Stay
      if (choice=='N'||choice=='n'){
         cout<<"--------------------------------------------------------"<<endl;
         cout<<"You decided to stay"<<endl;
         cout<<endl;
        //If Card 1 is an Ace
      if (let1=="Ace"){ cout<<"Card 1 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like "
            " the value to = '1', input 'N'"<<endl;
       cin>>ace;
    //User Validation
         while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
         cin >> ace;
}   //If Card 1 is Ace
    if (ace=='Y'||ace=='y') rand[0]=11;       //if (Y) Card 1=11
    else if( ace=='N'||ace=='n') rand[0]=1;   //if (N) Card1=1
    }
    //If Card 2 Ace
    if (let2=="Ace"){ cout<<"Card 2 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " input to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
        while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[1]=11;       //if (Y) Card2=11
    else if( ace=='N'||ace=='n') rand[1]=1;   //if (N) Card2=1
    }
         //If Card 3 Ace
    if (let3=="Ace"){ cout<<"Card 3 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " input to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
        while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[2]=11;       //if (Y), Card3=11
    else if( ace=='N'||ace=='n') rand[2]=1;   //if (N), Card3=1
    }
        sum=rand[0]+rand[1]+rand[2];              //Math for sum of 3 cards
        cout<<"Card 1 = "<<rand[0]<<endl;     //Displays value for card 1
        cout<<"Card 2 = "<<rand[1]<<endl;     //Displays value for card 2
        cout<<"Card 3 ="<<rand[2]<<endl;      //Displays Value for Card 3
        cout<<"Sum = "<<sum<<endl;          //Diplays Sum of 3 cards
        cout<<"Dealers card is "<<dlet1<<endl;  //Shows Dealers Card
        cont=false;                         //Doesn't ask to hit or stay again
        goDeal=true;                        //Goes to Dealers turn
    }
      }
    //01234567890123456789012345678012345678901234567890123456789012345678901234
    //47474747474747474747474747474747474747474747474747474747474747474747474747
    
    
   
     if(cont){
        //Asks User if they would like to hit or stay
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"Would you like to hit?-Input 'Y' for yes and 'N' for no"<<endl;
      cin>>choice;
      //User Validation
       while (choice != 'Y' && choice != 'y' && choice !='N' && choice != 'n'){
     cout<<"--------------------------------------------------------"<<endl;
     cout << "Invalid Input, must be either Y or N ;"<<endl;
     cout << "Would you like to hit?-Input 'Y' for yes and 'N' for no"<<endl;
     cin >> choice;
}       //if (Y), Start of 5th Card
      if(choice=='Y'||choice=='y'){
            if (rand[4]==11||rand[4]==1) let5="Ace";
            if (rand[4]==2)rand[4]=2 ,let5="Two";
            if (rand[4]==3)rand[4]=3 ,let5="Three";
            if (rand[4]==4)rand[4]=4 ,let5="Four";
            if (rand[4]==5)rand[4]=5 ,let5="Five";
            if (rand[4]==6)rand[4]=6 ,let5="Six";
            if (rand[4]==7||rand[4]==7) let5="Seven";    
            if (rand[4]==8)rand[4]=8 ,let5="Eight";
            if (rand[4]==9)rand[4]=9 ,let5="Nine";
            if (rand[4]==10)rand[4]=10 ,let5="Ten";    
            if (rand[4]==12)rand[4]=10 ,let5="Jack";
            if (rand[4]==13)rand[4]=10 ,let5="Queen";
            if (rand[4]==14)rand[4]=10 ,let5="King";
            
        //Display the faces of the 5 cards
    cout<<"Card 1 = "<<let1<<endl;
    cout<<"Card 2 = "<<let2<<endl;
    cout<<"Card 3 = "<<let3<<endl;     
    cout<<"Card 4 = "<<let4<<endl;
    cout<<"Card 5 = "<<let5<<endl;
    cout<<"Dealers Card is "<<dlet1<<endl;
      }
      //If user inputs (N) to Stay
      if (choice=='N'||choice=='n'){
        cout<<"--------------------------------------------------------"<<endl;
        cout<<"You decided to stay"<<endl;
         cout<<endl;
        //If card 1 is an Ace
         if (let1=="Ace"){ cout<<"Card 1 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " the value to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
     while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[0]=11;           //If (Y), card 1=11
    else if( ace=='N'||ace=='n') rand[0]=1;       //If (N), rand[0]=1
    }
    //If Card 2 Ace
    if (let2=="Ace"){ cout<<"Card 2 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
     while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[1]=11;           //If (Y), rand[1]=11
    else if( ace=='N'||ace=='n') rand[1]=1;       //If (N), rand[1]=1
    }
         //If Card 3 Ace
    if (let3=="Ace"){ cout<<"Card 3 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " input to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
      while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[2]=11;           //If (Y), rand[2]=11
    else if( ace=='N'||ace=='n') rand[2]=1;       //If (N), rand[2]=1
    }
         //If Card 4 Ace
    if (let4=="Ace"){ cout<<"Card 4 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " input to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
      while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[3]=11;           //If (Y), rand[3]=11
    else if( ace=='N'||ace=='n') rand[3]=1;       //If (N), rand[3]=1
    }
        sum=rand[0]+rand[1]+rand[2]+rand[3];            //Math for sum of the 4 cards
        cout<<"Card 1 = "<<rand[0]<<endl;         //Displays value for rand[0]
        cout<<"Card 2 = "<<rand[1]<<endl;         //Displays value for rand[1]
        cout<<"Card 3 ="<<rand[2]<<endl;          //Displays value for rand[2]
        cout<<"Card 4 = "<<rand[3]<<endl;         //Displays value for rand[3]
        cout<<"Sum = "<<sum<<endl;              //Sum of the 4 cards
        cout<<"Dealers card is "<<dlet1<<endl;  //Displays Dealers card
        cont=false;                           //Doesnt ask to hit or stay again
        goDeal=true;                          //Goes to Dealers turn
    }
      }
    //01234567890123456789012345678012345678901234567890123456789012345678901234
    //47474747474747474747474747474747474747474747474747474747474747474747474747
    
    
    
    
     if(cont){
        //Asks user if they would like to hit or stay
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"Would you like to hit?-Input 'Y' for yes and 'N' for no"<<endl;
      cin>>choice;
      //User Validation
       while (choice != 'Y' && choice != 'y' && choice !='N' && choice != 'n'){
     cout<<"--------------------------------------------------------"<<endl;
     cout << "Invalid Input, must be either Y or N ;"<<endl;
     cout << "Would you like to hit?-Input 'Y' for yes and 'N' for no"<<endl;
     cin >> choice;
}       //if (Y), Start of the 6th Card
      if(choice=='Y'||choice=='y'){
            if (rand[5]==11||rand[5]==1) let6="Ace";
            if (rand[5]==2)rand[5]=2 ,let6="Two";
            if (rand[5]==3)rand[5]=3 ,let6="Three";
            if (rand[5]==4)rand[5]=4 ,let6="Four";
            if (rand[5]==5)rand[5]=5 ,let6="Five";
            if (rand[5]==6)rand[5]=6 ,let6="Six";
            if (rand[5]==7||rand[5]==7) let6="Seven";    
            if (rand[5]==8)rand[5]=8 ,let6="Eight";
            if (rand[5]==9)rand[5]=9 ,let6="Nine";
            if (rand[5]==10)rand[5]=10 ,let6="Ten";    
            if (rand[5]==12)rand[5]=10 ,let6="Jack";
            if (rand[5]==13)rand[5]=10 ,let6="Queen";
            if (rand[5]==14)rand[5]=10 ,let6="King";
            
        //Display the face of the 6 cards
    cout<<"Card 1 = "<<let1<<endl;
    cout<<"Card 2 = "<<let2<<endl;
    cout<<"Card 3 = "<<let3<<endl;     
    cout<<"Card 4 = "<<let4<<endl;
    cout<<"Card 5 = "<<let5<<endl;
    cout<<"Card 6 = "<<let6<<endl;
    
    cout<<"Dealers Card is "<<dlet1<<endl;
      }
      //if (N), user decides to stay
      if (choice=='N'||choice=='n'){
        cout<<"--------------------------------------------------------"<<endl;
        cout<<"You decided to stay"<<endl;
         cout<<endl;
        //If rand[0] is an Ace
         if (let1=="Ace"){ cout<<"Card 1 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " the value to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
     while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[0]=11;               //if (Y), rand[0]=11
    else if( ace=='N'||ace=='n') rand[0]=1;           //if (N). rand[0]=1
    }
    //If Card 2 Ace
    if (let2=="Ace"){ cout<<"Card 2 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " input to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
     while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[1]=11;           //if (Y), rand[1]=11
    else if( ace=='N'||ace=='n') rand[1]=1;       //if (N), rand[1]=1
    }
         //If Card 3 Ace
    if (let3=="Ace"){ cout<<"Card 3 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " input to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
     while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[2]=11;               //If (Y), rand[2]=11
    else if( ace=='N'||ace=='n') rand[2]=1;           //If (N), rand[2]=1
    }
         //If Card 4 Ace
    if (let4=="Ace"){ cout<<"Card 4 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " input to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
     while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[3]=11;               //if (Y), rand[3]=11
    else if( ace=='N'||ace=='n') rand[3]=1;           //if (N), rand[3]=1
    }
            //If Card 5 Ace
    if (let5=="Ace"){ cout<<"Card 5 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " input to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
    while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[4]=11;               //if (Y), rand[4]=11
    else if( ace=='N'||ace=='n') rand[4]=1;           //if (N), rand[4]=1
    }
        sum=rand[0]+rand[1]+rand[2]+rand[3]+rand[4];        //Math for sum of the 5 cards
        cout<<"Card 1 = "<<rand[0]<<endl;             //Displays card 1 Value
        cout<<"Card 2 = "<<rand[1]<<endl;             //Displays card 2 Value
        cout<<"Card 3 ="<<rand[2]<<endl;              //Displays card 3 Value
        cout<<"Card 4 = "<<rand[3]<<endl;             //Displays card 4 Value
        cout<<"Card 5 = "<<rand[4]<<endl;             //Displays card 5 Value
        cout<<"Sum = "<<sum<<endl;                  //Displays the sum
        cout<<"Dealers card is "<<dlet1<<endl;      //Displays the dealers card
        cont=false;                           //Doesn't ask to hit or stay again
        goDeal=true;                          //Goes to Dealers Turn
         
    }
      }
    //01234567890123456789012345678012345678901234567890123456789012345678901234
    //47474747474747474747474747474747474747474747474747474747474747474747474747
    
   
     if(cont){
       //Tells User they reached the card limit
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"Card limit reached. Input 'Y' to stand."<<endl;
      cin>>choice;
      //User Validation
       while (choice != 'Y' && choice != 'y'){
     cout<<"--------------------------------------------------------"<<endl;
     cout << "Invalid Input, must be either Y ;"<<endl;
     cout << "Card limit reached. Input 'Y' to stand."<<endl;
     cin >> choice;
} 
      //if (Y) the user stays
      if (choice=='Y'||choice=='y'){
        cout<<"--------------------------------------------------------"<<endl;
        cout<<"You decided to stay"<<endl;
        cout<<endl;
        //If card 1 is an Ace
         if (let1=="Ace"){ cout<<"Card 1 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " the value to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
    while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[0]=11;               //if (Y), rand[0]=11
    else if( ace=='N'||ace=='n') rand[0]=1;           //IF (n), Card1=1
    }
    //If Card 2 Ace
    if (let2=="Ace"){ cout<<"Card 2 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " input to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
    while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[1]=11;                //if (Y), Card2=11
    else if( ace=='N'||ace=='n') rand[1]=1;            //if (N), Card2=1
    }
         //If Card 3 Ace
    if (let3=="Ace"){ cout<<"Card 3 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " input to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
    while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[2]=11;               //if (Y), rand[2]=11
    else if( ace=='N'||ace=='n') rand[2]=1;           //if (N), rand[2]=1
    }
    //If Card 4 Ace
    if (let4=="Ace"){ cout<<"Card 4 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " input to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
    while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[3]=11;               //if (Y), Card4=11
    else if( ace=='N'||ace=='n') rand[3]=1;           //if (N), CArd4=1
    }
            //If Card 5 Ace
    if (let5=="Ace"){ cout<<"Card 5 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " input to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
    while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[4]=11;               //if (Y), Card5=11
    else if( ace=='N'||ace=='n') rand[4]=1;           //if (N), Card5=1
    }
          //If Card 6 Ace
    if (let6=="Ace"){ cout<<"Card 6 is an Ace!"<<endl;
    cout<<"If you would like the value to = '11', input Y. If you would like the"
            " input to = '1', input 'N'"<<endl;
    cin>>ace;
    //User Validation
    while (ace != 'y' && ace != 'Y' && ace != 'n' && ace != 'N')
{
     cout << "Invalid Input, must be either Y or N;"<<endl;
     cout<<"If you would like the value to = '11', input Y. If you would like the"
            " value to = '1', input 'N'"<<endl;
     cin >> ace;
} 
    if (ace=='Y'||ace=='y') rand[5]=11;               //if (Y), Card6=11
    else if( ace=='N'||ace=='n') rand[5]=1;           //if (N), Card6=1
    }
        sum=rand[0]+rand[1]+rand[2]+rand[3]+rand[4]+rand[5];  //Math for sum of the 6 Cards
        cout<<"Card 1 = "<<rand[0]<<endl;             //Display Card 1 Value
        cout<<"Card 2 = "<<rand[1]<<endl;             //Display Card 2 Value
        cout<<"Card 3 ="<<rand[2]<<endl;              //Display Card 3 Value
        cout<<"Card 4 = "<<rand[3]<<endl;             //Display Card 4 Value
        cout<<"Card 5 = "<<rand[4]<<endl;             //Display Card 5 Value
        cout<<"Card 6 = "<<rand[5]<<endl;             //Display Card 6 Value
        cout<<"Sum = "<<sum<<endl;                  //Display the sum 
        cout<<"Dealers card is "<<dlet1<<endl;      //Display the Dealers Card
        cont=false;                         //Doesn't ask to hit or stay again
        goDeal=true;                        //Goes to Dealers Turn
         
    }
      }
    //01234567890123456789012345678012345678901234567890123456789012345678901234
    //47474747474747474747474747474747474747474747474747474747474747474747474747
    
    if (sum>21){goDeal=false;}      //If sum Greater than 21, user busts. So
                                    //skip Dealers turn.
    
    
    
    //When the player Holds
    //Dealers 2nd card
    if(goDeal){
        cout<<"--------------------------------------------------------"<<endl;
        cout<<"Type 'Y' for the dealer to show their 2nd Card"<<endl;
        cin>>choice;
        //User Validation
         while (choice != 'Y' && choice != 'y' && choice !='N' && choice != 'n'){
     cout<<"--------------------------------------------------------"<<endl;
     cout << "Invalid Input, you must input a 'Y';"<<endl;
     cout << "Type 'Y' for the dealer to show their 2nd Card"<<endl;
     cin >> choice;
}       //when (Y), gets dealers 2nd card
        if (choice=='Y'||choice=='y'){
         //Dealers 2nd card
    if (rand[7]==11||rand[7]==1) dlet2="Ace";
    if (rand[7]==2)rand[7]=2 ,dlet2="Two";
    if (rand[7]==3)rand[7]=3 ,dlet2="Three";
    if (rand[7]==4)rand[7]=4 ,dlet2="Four";
    if (rand[7]==5)rand[7]=5 ,dlet2="Five";
    if (rand[7]==6)rand[7]=6 ,dlet2="Six";
    if (rand[7]==7||rand[7]==7) dlet2="Seven";    
    if (rand[7]==8)rand[7]=8 ,dlet2="Eight";
    if (rand[7]==9)rand[7]=9 ,dlet2="Nine";
    if (rand[7]==10)rand[7]=10 ,dlet2="Ten";    
    if (rand[7]==12)rand[7]=10 ,dlet2="Jack";
    if (rand[7]==13)rand[7]=10 ,dlet2="Queen";
    if (rand[7]==14)rand[7]=10 ,dlet2="King";
        
        cout<<"Dealers 1st Card = "<<dlet1<<endl;    //Displays dealers 1st card
        cout<<"Dealers 2nd Card = "<<dlet2<<endl;    //Displays dealers 2nd card
        //if Dealer's 1st Card is an Ace
        if (dlet1=="Ace" && rand[7]<=10) rand[6]=11; //Dealer chooses ace to = 11
        else if (dlet1=="Ace" && rand[7]>10) rand[6]=1;//Dealer choooses ace to =1
        //if Dealer's 2nd Card is an Ace
        else if (dlet2=="Ace" && rand[6]<=10) rand[7]=11;//Chooses Ace=11
        else if (dlet2=="Ace" && rand[6]>10) rand[7]=1;//Dealer chooses Ace=1
        dsum=rand[6]+rand[7];                //Math for sum of the dealers 2 cards
        cout<<"Dealer's Sum = "<<dsum<<endl;        //Displays Dealer's Sum
        cout<<"Your sum = "<<sum<<endl;             //Displays User's Sum
        }
        
    //01234567890123456789012345678012345678901234567890123456789012345678901234
    //47474747474747474747474747474747474747474747474747474747474747474747474747
        
        //if Dealers sum is <17 he hits
        if (dsum<17) {
         cout<<"--------------------------------------------------------"<<endl;
            cout<<"The dealer hits."<<endl;
            cout<<"Type 'Y' to continue"<<endl;
            cin>>choice;
            //User Validation
             while (choice != 'Y' && choice != 'y' && choice !='N' && choice != 'n'){
     cout<<"--------------------------------------------------------"<<endl;
     cout << "Invalid Input, you must input a 'Y';"<<endl;
     cout << "Type 'Y' to continue"<<endl;
     cin >> choice;}
            //user inputs (Y) to continue
        if (choice=='Y'||choice=='y'){
            if (rand[8]==11||rand[8]==1) dlet3="Ace";
            if (rand[8]==2)rand[8]=2 ,dlet3="Two";
            if (rand[8]==3)rand[8]=3 ,dlet3="Three";
            if (rand[8]==4)rand[8]=4 ,dlet3="Four";
            if (rand[8]==5)rand[8]=5 ,dlet3="Five";
            if (rand[8]==6)rand[8]=6 ,dlet3="Six";
            if (rand[8]==7||rand[8]==7) dlet3="Seven";    
            if (rand[8]==8)rand[8]=8 ,dlet3="Eight";
            if (rand[8]==9)rand[8]=9 ,dlet3="Nine";
            if (rand[8]==10)rand[8]=10 ,dlet3="Ten";    
            if (rand[8]==12)rand[8]=10 ,dlet3="Jack";
            if (rand[8]==13)rand[8]=10 ,dlet3="Queen";
            if (rand[8]==14)rand[8]=10 ,dlet3="King";
        cout<<"Dealers 1st Card = "<<dlet1<<endl;   //Displays the faces of the
        cout<<"Dealers 2nd Card = "<<dlet2<<endl;   //dealer's 3 cards
        cout<<"Dealers 3rd card = "<<dlet3<<endl;   
        //If Dealer's 3rd card is an Ace
        if (dlet3=="Ace" && dsum<=10) rand[8]=11;//Dealer chooses value of Ace=11
        else if (dlet3=="Ace" && dsum>10) rand[8]=1;//Dealer chooses Ace =1
       
        dsum=rand[6]+rand[7]+rand[8];            //Math for sum of Dealer's 3 cards
        cout<<"Dealer's Sum = "<<dsum<<endl;    //Displays the dealers sum
        cout<<"Your sum = "<<sum<<endl;         //Displays the User's Sum
        
            }
        }
        
    //01234567890123456789012345678012345678901234567890123456789012345678901234
    //47474747474747474747474747474747474747474747474747474747474747474747474747
        //If Dealer' sum is <17 he hits
         if (dsum<17) {
         cout<<"--------------------------------------------------------"<<endl;
            cout<<"The dealer hits."<<endl;
            cout<<"Type 'Y' to continue"<<endl;
            cin>>choice;
            //User Validation
             while (choice != 'Y' && choice != 'y' && choice !='N' && choice != 'n'){
     cout<<"--------------------------------------------------------"<<endl;
     cout << "Invalid Input, you must input a 'Y';"<<endl;
     cout << "Type 'Y' to continue"<<endl;
     cin >> choice;}
        if (choice=='Y'||choice=='y'){
            if (rand[9]==11||rand[9]==1) dlet4="Ace";
            if (rand[9]==2)rand[9]=2 ,dlet4="Two";
            if (rand[9]==3)rand[9]=3 ,dlet4="Three";
            if (rand[9]==4)rand[9]=4 ,dlet4="Four";
            if (rand[9]==5)rand[9]=5 ,dlet4="Five";
            if (rand[9]==6)rand[9]=6 ,dlet4="Six";
            if (rand[9]==7||rand[9]==7) dlet4="Seven";    
            if (rand[9]==8)rand[9]=8 ,dlet4="Eight";
            if (rand[9]==9)rand[9]=9 ,dlet4="Nine";
            if (rand[9]==10)rand[9]=10 ,dlet4="Ten";    
            if (rand[9]==12)rand[9]=10 ,dlet4="Jack";
            if (rand[9]==13)rand[9]=10 ,dlet4="Queen";
            if (rand[9]==14)rand[9]=10 ,dlet4="King";
        cout<<"Dealers 1st Card = "<<dlet1<<endl; //Display the dealer's 4 cards
        cout<<"Dealers 2nd Card = "<<dlet2<<endl;
        cout<<"Dealers 3rd card = "<<dlet3<<endl;
        cout<<"Dealers 4th card = "<<dlet4<<endl;
        //if Dealer's 4th card is an Ace
        if (dlet4=="Ace" && dsum<=10) rand[9]=11; //Dealer chooses Ace=11
        else if (dlet4=="Ace" && dsum>10) rand[9]=1;//Dealer chooses Ace=1
       
        dsum=rand[6]+rand[7]+rand[8]+rand[9];   //Math for sum of dealers 4 cards
        cout<<"Dealer's Sum = "<<dsum<<endl;    //Displays the dealers sum
        cout<<"Your sum = "<<sum<<endl;         //Displays the User's Sum
        
            }
        }
        
    //01234567890123456789012345678012345678901234567890123456789012345678901234
    //47474747474747474747474747474747474747474747474747474747474747474747474747
        //if dealer's sum is <17 he hits
          if (dsum<17) {
         cout<<"--------------------------------------------------------"<<endl;
            cout<<"The dealer hits."<<endl;
            cout<<"Type 'Y' to continue"<<endl;
            cin>>choice;
            //User Validation
             while (choice != 'Y' && choice != 'y' && choice !='N' && choice != 'n'){
     cout<<"--------------------------------------------------------"<<endl;
     cout << "Invalid Input, you must input a 'Y';"<<endl;
     cout << "Type 'Y' to continue"<<endl;
     cin >> choice;}
        if (choice=='Y'||choice=='y'){
            if (rand[10]==11||rand[10]==1) dlet5="Ace";
            if (rand[10]==2)rand[10]=2 ,dlet5="Two";
            if (rand[10]==3)rand[10]=3 ,dlet5="Three";
            if (rand[10]==4)rand[10]=4 ,dlet5="Four";
            if (rand[10]==5)rand[10]=5 ,dlet5="Five";
            if (rand[10]==6)rand[10]=6 ,dlet5="Six";
            if (rand[10]==7||rand[10]==7) dlet5="Seven";    
            if (rand[10]==8)rand[10]=8 ,dlet5="Eight";
            if (rand[10]==9)rand[10]=9 ,dlet5="Nine";
            if (rand[10]==10)rand[10]=10 ,dlet5="Ten";    
            if (rand[10]==12)rand[10]=10 ,dlet5="Jack";
            if (rand[10]==13)rand[10]=10 ,dlet5="Queen";
            if (rand[10]==14)rand[10]=10 ,dlet5="King";
        cout<<"Dealers 1st Card = "<<dlet1<<endl; //Displays face of dealer's
        cout<<"Dealers 2nd Card = "<<dlet2<<endl;   //5 cards
        cout<<"Dealers 3rd card = "<<dlet3<<endl;
        cout<<"Dealers 4th card = "<<dlet4<<endl;
        cout<<"Dealers 5th card = "<<dlet5<<endl;
        //If Dealer's 5th card is an Ace
        if (dlet5=="Ace" && dsum<=10) rand[10]=11;    //Dealer chooses Ace=11
        else if (dlet5=="Ace" && dsum>10) rand[10]=1; //Dealer chooses Ace=1
       
        dsum=rand[6]+rand[7]+rand[8]+rand[9]+rand[10];//Math for sum of Dealer's cards
        cout<<"Dealer's Sum = "<<dsum<<endl;        //Display Dealer's Sum
        cout<<"Your sum = "<<sum<<endl;             //Displays User's Sum
        
            }
        }
    //01234567890123456789012345678012345678901234567890123456789012345678901234
    //47474747474747474747474747474747474747474747474747474747474747474747474747
        
        //if Dealer's sum is <17, the Dealer hits
         if (dsum<17) {
         cout<<"--------------------------------------------------------"<<endl;
            cout<<"The dealer hits."<<endl;
            cout<<"Type 'Y' to continue"<<endl;
            cin>>choice;
            //User Validation
             while (choice != 'Y' && choice != 'y' && choice !='N' && choice != 'n'){
     cout<<"--------------------------------------------------------"<<endl;
     cout << "Invalid Input, you must input a 'Y';"<<endl;
     cout << "Type 'Y' to continue"<<endl;
     cin >> choice;}
        if (choice=='Y'||choice=='y'){
            if (rand[11]==11||rand[11]==1) dlet6="Ace";
            if (rand[11]==2)rand[11]=2 ,dlet6="Two";
            if (rand[11]==3)rand[11]=3 ,dlet6="Three";
            if (rand[11]==4)rand[11]=4 ,dlet6="Four";
            if (rand[11]==5)rand[11]=5 ,dlet6="Five";
            if (rand[11]==6)rand[11]=6 ,dlet6="Six";
            if (rand[11]==7||rand[11]==7) dlet6="Seven";    
            if (rand[11]==8)rand[11]=8 ,dlet6="Eight";
            if (rand[11]==9)rand[11]=9 ,dlet6="Nine";
            if (rand[11]==10)rand[11]=10 ,dlet6="Ten";    
            if (rand[11]==12)rand[11]=10 ,dlet6="Jack";
            if (rand[11]==13)rand[11]=10 ,dlet6="Queen";
            if (rand[11]==14)rand[11]=10 ,dlet6="King";
        cout<<"Dealers 1st Card = "<<dlet1<<endl;       //Displays the faces of 
        cout<<"Dealers 2nd Card = "<<dlet2<<endl;       //the dealers 6 cards
        cout<<"Dealers 3rd card = "<<dlet3<<endl;
        cout<<"Dealers 4th card = "<<dlet4<<endl;
        cout<<"Dealers 5th card = "<<dlet5<<endl;
        cout<<"Dealers 6th card = "<<dlet6<<endl;
        //if Dealers 6th Card is an Ace
        if (dlet6=="Ace" && dsum<=10) rand[11]=11;        //Dealer chooses Ace=11
        else if (dlet6=="Ace" && dsum>10) rand[11]=1;     //Dealer chooses Ace=1
       
        dsum=rand[6]+rand[7]+rand[8]+rand[9]+rand[10]+rand[11];//Math for sum of DCrds
        cout<<"Dealer's Sum = "<<dsum<<endl;            //Displays dealer's sum
        cout<<"Your sum = "<<sum<<endl;                 //Displays user's Sum
        
            }
        }
   }
    
    //01234567890123456789012345678012345678901234567890123456789012345678901234
    //47474747474747474747474747474747474747474747474747474747474747474747474747
    //Results                                                    Results
    //                                                              |
    if(sum>21 && dsum<=21){//                                       |
        cout<<"You bust, the dealer wins! :("<<endl;//              |
        out<<"You bust, the dealer wins! :("<<endl;//               |
   }//                                                              |
     //                                                             |
    if (sum==dsum){//                                               |
        cout<<"It's a tie!"<<endl;//                                |
        out<<"It's a tie!"<<endl;}//                                |                  
    if(sum>dsum && sum<=21){//                                      |
        cout<<"Congrats, you win!!"<<endl; //                       |
         out<<"Congrats, you win!!"<<endl;}//                       |    
    if(sum<=21 && dsum>21){//                                       |
         cout<<"The Dealer busts. Congrats, you win!!"<<endl;//     |
         out<<"The Dealer busts. Congrats, you win!!"<<endl;}//     |
    //                                                              |
    if (dsum>sum && dsum<=21){//                                    |
        cout<<"You lose. :("<<endl;//                               |
         out<<"You lose. :("<<endl;}//                              |
//-------------------------------------------------------------------    
    
   
   cout<<endl;
   cout<<endl;
   cout<<"--------------------------------------------------------"<<endl;
   cout<<"Would you like to play again? Input 'Y', for yes or 'N' for no. "
           <<endl;
   cin>>choice;
   //Validate User Input
    while (choice != 'Y' && choice != 'y' && choice !='N' && choice != 'n'){
     cout<<"--------------------------------------------------------"<<endl;
     cout << "Invalid Input, you must input a 'Y' or a 'N';"<<endl;
     cout << "Would you like to play again? Input 'Y', for yes or 'N' for no."
             <<endl;
     cin >> choice;}
   cout<<"--------------------------------------------------------"<<endl;
  //If (Y) game restarts
   }while (choice=='Y'||choice=='y');
    //Game Ends
    if(choice!='Y'||choice!='y'){
       cout<<"Thank you for playing."<<endl;}
               
   
   
    //Exit
   out.close();
    return 0;
   }}
   
void randNum(int r[],int n){
    for (int i=0;i<n;i++){
       int rcard=rand()%14+1;//[1-14]
        r[i]=rcard;}
    }