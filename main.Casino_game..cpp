#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;
void rules();

int main(){
  
 string Player_name;  
 int balance;
 int guess;
 int secretNumber;
 int bet_amount;
 char choice;
 int option;
 
    cout<<"*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  WELCOME TO DOMINIC'S  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*\n";
    cout<<"*========================================================================================*\n";
    cout<<"*                                                                                        *\n";
    cout<<"*     CCCCCCCCC         A        SSSSSSSSS    IIIIIIIIIII    NN     NN      OOOOOOOO     *\n";
    cout<<"*    CC               A   A      SS               III        NN N   NN      OO    OO     *\n";
    cout<<"*   CC               A     A     SSSSSSSSS        III        NN  N  NN      OO    OO     *\n";                                                                                           
    cout<<"*    CC             AAAAAAAAA           SS        III        NN   N NN      OO    OO     *\n";
    cout<<"*     CCCCCCCCC    A         A   SSSSSSSSS    IIIIIIIIIII    NN     NN      OOOOOOOO     *\n";
    cout<<"*                                                                                        *\n";
    cout<<"*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*\n";
    cout<<"********************************  WORLD---BEST---GAME  ***********************************\n\n\n\n\n";
   cout<<"ENTER YOUR NAME\n";
  getline(cin, Player_name);
  cout<<"\n";
  cout<<" ENTER AMOUNT TO DEPOSITE INTO YOUR BETTING ACCOUNT TO START PLAYING GAME!\n";
  cin>>balance;
  cout<<"You Have Deposited Ghc:" <<balance<<" Into Your Betting Account!.\n\n\n";
do{
  cout<<"\n\n\n";
  cout<<"------------------------WELCOME TO THE CASINO GAME------------------------------\n";
  cout<<"(((((((((((((((((((((((((((((((((((((((())))))))))))))))))))))))))))))))))))))))\n";
  cout<<"                         RULES OF THE GAME                                      \n";
  cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
  cout<<"1. Choose any number between 1 to 10.                                          -\n";
  cout<<"2. If you win, you get 2 times the amount you bet.                             -\n";
  cout<<"3. If you lose, the amount bet will be deducted from your account.             -\n";
  cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
  cout<<"==========**** DEVELOPED **** BY **** KLEMEH **** DOMINIC ****==================\n\n\n";

  cout<<"\nHey "<<Player_name<<" WElcome to the CASINO NUMBER GUESSING GAME!!\n\n";
  cout<<"Enter Amount To Bet\n";
  cin>>bet_amount;
  cout<<"\n";
  if(bet_amount>balance){
  	cout<<"Bet ammout can't be over account balance\n";
  	break;
  }
  else{
  cout<<"You've placed bet amount of Ghc:"<<bet_amount<<"\nThe amount of Ghc:"<<bet_amount<<" Has been deducted from your account\n"<<"Your Available balance is Ghc: "<<balance - bet_amount<<"\n\n";
}
   cout<<"Guess your lucky number from 1 to 10!\n";
   cin>>guess;
secretNumber=rand() % 10 + 1;
if(secretNumber!=guess){
	balance -= bet_amount ;
	cout<<"Oops! " "Sorry! "<<Player_name<<" Better luck next time.\n"<<"YOU lost Ghc: "<<bet_amount<<"\n\n";
}
else{
	balance += (bet_amount * 2);
  cout<<"Congratulations! "<<Player_name<<" You Guessed correctly!\n"<<"You won Ghc: "<<bet_amount * 2<<"\n\n";
}
    cout<<"The winning number was "<<secretNumber<<"\n\n";
    cout<<"Hey "<<Player_name<<" You have Ghc: "<<balance<<" remaining in your account \n\n\n";

    if(balance==0){
      cout<<"Insufficient money to play game\n";
    
      break;
  }
  cout<<"*++++++++++++++++++++++++++++++++++++++++++++++*\n";
  cout<<"*          Do you want to play again?          *\n";    
  cout<<"*-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_*\n";
  cout<<"*    *** If YES, PRESS(y) *** if NO, PRESS(n)  *\n";
  cout<<"*_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-*\n";
  cout<<"===============================================*\n";
  cin>>choice;
}while(choice=='y' || choice=='Y');
    cout<<"\n\nThanks for playing Dominic's CASINO GAME!\n\n";
return 0;
}
void rules()
{
  system("cls");
  // rules in game
  cout<<"------------------------WELCOME TO THE CASINO GAME------------------------------\n";
  cout<<"(((((((((((((((((((((((((((((((((((((((())))))))))))))))))))))))))))))))))))))))\n";
  cout<<"                         RULES OF THE GAME                                      \n";
  cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
  cout<<"1. Choose any number between 1 to 10.                                          -\n";
  cout<<"2. If you win, you get 2 times the amount you bet.                             -\n";
  cout<<"3. If you lose, the amount bet will be deducted from your account.             -\n";
  cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
  cout<<"==========**** DEVELOPED **** BY **** KLEMEH **** DOMINIC ****==================\n\n\n";
}
