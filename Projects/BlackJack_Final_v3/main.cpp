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
string card1(int [],string &);
string card2(int [],string &);
string card3(int [],string &);
string card4(int [],string &);
string card5(int [],string &);
string card6(int [],string &);
string dcard1(int [],string &);
int ace1(int [],string );
int ace2(int [],string );
int ace3(int [],string );
int ace4(int [],string );
int ace5(int [],string );
int ace6(int [],string );
bool bust(int,bool &);
void result(int , int );
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
    card1(rand,let1);
         
    //Value for Card 2
    card2(rand,let2);
    //Dealers 1st Card
    dcard1(rand,dlet1);
   
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
         card3(rand,let3);
           
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
         //If Card 1 Ace
         ace1(rand,let1);
         
     
    //If Card 2 Ace
         ace2(rand,let2);
       
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
            card4(rand,let4);
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
          ace1(rand,let1);
         //If Card 2 Ace
         ace2(rand,let2);
         //If Card 3 Ace
          ace3(rand,let3);
    
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
            card5(rand,let5);
            
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
       //If Card 1 is an Ace
          ace1(rand,let1);
         //If Card 2 Ace
         ace2(rand,let2);
         //If Card 3 Ace
          ace3(rand,let3);
         //If Card 4 Ace
          ace4(rand,let4);
    
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
           card6(rand,let6);
            
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
        //If Card 1 is an Ace
          ace1(rand,let1);
         //If Card 2 Ace
         ace2(rand,let2);
         //If Card 3 Ace
          ace3(rand,let3);
         //If Card 4 Ace
          ace4(rand,let4);
    
            //If Card 5 Ace
          ace5(rand,let5);
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
         //If Card 1 is an Ace
          ace1(rand,let1);
         //If Card 2 Ace
         ace2(rand,let2);
         //If Card 3 Ace
          ace3(rand,let3);
         //If Card 4 Ace
          ace4(rand,let4);  
         //If Card 5 Ace
          ace5(rand,let5);
          //If Card 6 Ace
          ace6(rand,let6);
          
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
      bust(sum,goDeal);                  //If sum Greater than 21, user busts. So
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
    //        
  result(sum,dsum);
                             
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
string card1(int a[],string &n){
    
    if (a[0]==11||a[0]==1) n="Ace";
    if (a[0]==2)a[0]=2 ,n="Two";
    if (a[0]==3)a[0]=3 ,n="Three";
    if (a[0]==4)a[0]=4 ,n="Four";
    if (a[0]==5)a[0]=5 ,n="Five";
    if (a[0]==6)a[0]=6 ,n="Six";
    if (a[0]==7||a[0]==7) n="Seven";    
    if (a[0]==8)a[0]=8 ,n="Eight";
    if (a[0]==9)a[0]=9 ,n="Nine";
    if (a[0]==10)a[0]=10 ,n="Ten";    
    if (a[0]==12)a[0]=10 ,n="Jack";
    if (a[0]==13)a[0]=10 ,n="Queen";
    if (a[0]==14)a[0]=10 ,n="King";
    return n;
}
string card2(int a[],string &n){
    
    if (a[1]==11||a[1]==1) n="Ace";
    if (a[1]==2)a[1]=2 ,n="Two";
    if (a[1]==3)a[1]=3 ,n="Three";
    if (a[1]==4)a[1]=4 ,n="Four";
    if (a[1]==5)a[1]=5 ,n="Five";
    if (a[1]==6)a[1]=6 ,n="Six";
    if (a[1]==7||a[1]==7) n="Seven";    
    if (a[1]==8)a[1]=8 ,n="Eight";
    if (a[1]==9)a[1]=9 ,n="Nine";
    if (a[1]==10)a[1]=10 ,n="Ten";    
    if (a[1]==12)a[1]=10 ,n="Jack";
    if (a[1]==13)a[1]=10 ,n="Queen";
    if (a[1]==14)a[1]=10 ,n="King";
    return n;
}
string card3(int a[],string &n){
    
    if (a[2]==11||a[2]==1) n="Ace";
    if (a[2]==2)a[2]=2 ,n="Two";
    if (a[2]==3)a[2]=3 ,n="Three";
    if (a[2]==4)a[2]=4 ,n="Four";
    if (a[2]==5)a[2]=5 ,n="Five";
    if (a[2]==6)a[2]=6 ,n="Six";
    if (a[2]==7||a[2]==7) n="Seven";    
    if (a[2]==8)a[2]=8 ,n="Eight";
    if (a[2]==9)a[2]=9 ,n="Nine";
    if (a[2]==10)a[2]=10 ,n="Ten";    
    if (a[2]==12)a[2]=10 ,n="Jack";
    if (a[2]==13)a[2]=10 ,n="Queen";
    if (a[2]==14)a[2]=10 ,n="King";
    return n;
}

string card4(int a[],string &n){
    
    if (a[3]==11||a[3]==1) n="Ace";
    if (a[3]==2)a[3]=2 ,n="Two";
    if (a[3]==3)a[3]=3 ,n="Three";
    if (a[3]==4)a[3]=4 ,n="Four";
    if (a[3]==5)a[3]=5 ,n="Five";
    if (a[3]==6)a[3]=6 ,n="Six";
    if (a[3]==7||a[3]==7) n="Seven";    
    if (a[3]==8)a[3]=8 ,n="Eight";
    if (a[3]==9)a[3]=9 ,n="Nine";
    if (a[3]==10)a[3]=10 ,n="Ten";    
    if (a[3]==12)a[3]=10 ,n="Jack";
    if (a[3]==13)a[3]=10 ,n="Queen";
    if (a[3]==14)a[3]=10 ,n="King";
    return n;
}

string card5(int a[],string &n){
    
    if (a[4]==11||a[4]==1) n="Ace";
    if (a[4]==2)a[4]=2 ,n="Two";
    if (a[4]==3)a[4]=3 ,n="Three";
    if (a[4]==4)a[4]=4 ,n="Four";
    if (a[4]==5)a[4]=5 ,n="Five";
    if (a[4]==6)a[4]=6 ,n="Six";
    if (a[4]==7||a[4]==7) n="Seven";    
    if (a[4]==8)a[4]=8 ,n="Eight";
    if (a[4]==9)a[4]=9 ,n="Nine";
    if (a[4]==10)a[4]=10 ,n="Ten";    
    if (a[4]==12)a[4]=10 ,n="Jack";
    if (a[4]==13)a[4]=10 ,n="Queen";
    if (a[4]==14)a[4]=10 ,n="King";
    return n;
}

string card6(int a[],string &n){
    
    if (a[5]==11||a[5]==1) n="Ace";
    if (a[5]==2)a[5]=2 ,n="Two";
    if (a[5]==3)a[5]=3 ,n="Three";
    if (a[5]==4)a[5]=4 ,n="Four";
    if (a[5]==5)a[5]=5 ,n="Five";
    if (a[5]==6)a[5]=6 ,n="Six";
    if (a[5]==7||a[5]==7) n="Seven";    
    if (a[5]==8)a[5]=8 ,n="Eight";
    if (a[5]==9)a[5]=9 ,n="Nine";
    if (a[5]==10)a[5]=10 ,n="Ten";    
    if (a[5]==12)a[5]=10 ,n="Jack";
    if (a[5]==13)a[5]=10 ,n="Queen";
    if (a[5]==14)a[5]=10 ,n="King";
    return n;
}
string dcard1(int a[],string &n){
    
    if (a[6]==11||a[6]==1) n="Ace";
    if (a[6]==2)a[6]=2 ,n="Two";
    if (a[6]==3)a[6]=3 ,n="Three";
    if (a[6]==4)a[6]=4 ,n="Four";
    if (a[6]==5)a[6]=5 ,n="Five";
    if (a[6]==6)a[6]=6 ,n="Six";
    if (a[6]==7||a[6]==7) n="Seven";    
    if (a[6]==8)a[6]=8 ,n="Eight";
    if (a[6]==9)a[6]=9 ,n="Nine";
    if (a[6]==10)a[6]=10 ,n="Ten";    
    if (a[6]==12)a[6]=10 ,n="Jack";
    if (a[6]==13)a[6]=10 ,n="Queen";
    if (a[6]==14)a[6]=10 ,n="King";
    return n;
}

int ace1(int a[],string n){
    char ace;
      //If card 1 is an Ace
         if (n=="Ace"){ cout<<"Card 1 is an Ace!"<<endl;
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
    if (ace=='Y'||ace=='y') a[0]=11; //If (Y) Ace equals 11
    else if( ace=='N'||ace=='n') a[0]=1;//If (N) Ace equals 1
    }
         return a[0];
}

int ace2(int a[],string n){
      char ace;
      //If card 2 is an Ace
         if (n=="Ace"){ cout<<"Card 2 is an Ace!"<<endl;
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
    if (ace=='Y'||ace=='y') a[1]=11; //If (Y) Ace equals 11
    else if( ace=='N'||ace=='n') a[1]=1;//If (N) Ace equals 1
    }
         return a[1];
}

int ace3(int a[],string n){
      char ace;
      //If card 3 is an Ace
         if (n=="Ace"){ cout<<"Card 3 is an Ace!"<<endl;
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
    if (ace=='Y'||ace=='y') a[2]=11; //If (Y) Ace equals 11
    else if( ace=='N'||ace=='n') a[2]=1;//If (N) Ace equals 1
    }
         return a[2];
}

int ace4(int a[],string n){
      char ace;
      //If card 3 is an Ace
         if (n=="Ace"){ cout<<"Card 4 is an Ace!"<<endl;
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
    if (ace=='Y'||ace=='y') a[3]=11; //If (Y) Ace equals 11
    else if( ace=='N'||ace=='n') a[3]=1;//If (N) Ace equals 1
    }
         return a[3];
}

int ace5(int a[],string n){
      char ace;
      //If card 5 is an Ace
         if (n=="Ace"){ cout<<"Card 5 is an Ace!"<<endl;
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
    if (ace=='Y'||ace=='y') a[4]=11; //If (Y) Ace equals 11
    else if( ace=='N'||ace=='n') a[4]=1;//If (N) Ace equals 1
    }
         return a[4];
}

int ace6(int a[],string n){
      char ace;
      //If card 6 is an Ace
         if (n=="Ace"){ cout<<"Card 6 is an Ace!"<<endl;
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
    if (ace=='Y'||ace=='y') a[5]=11; //If (Y) Ace equals 11
    else if( ace=='N'||ace=='n') a[5]=1;//If (N) Ace equals 1
    }
         return a[5];
}
bool bust(int n,bool &m){
 if (n>21){
     return m=false;
 }
}

void result(int n, int m){
     if(n>21 && m<=21){                                       
        cout<<"You bust, the dealer wins! :("<<endl;                               
   }                                                                                                                           
    if (n==m){                                   
        cout<<"It's a tie!"<<endl;                                
    }                                  
    if(n>m && n<=21){                                      
        cout<<"Congrats, you win!!"<<endl;                        
    }      
    if(n<=21 && m>21){                                       
         cout<<"The Dealer busts. Congrats, you win!!"<<endl;     
    }
                                                                  
    if (m>n && m<=21){                                    
        cout<<"You lose. :("<<endl;                               
    }
}