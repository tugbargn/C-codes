#include<iostream>
#include<string.h>
using namespace std;


int main(){

    string user;
    int num,com;
    string computer;
        
    cout<<"Choose one of Rocks, Paper, Scissors : "<<endl;
    cin>>user;
    
    if(user == "Rocks")
        num = 1;
    else if(user == "rocks")
        num = 1;
    else if(user == "ROCKS")
        num = 1;
    else if(user == "Paper")
        num = 2;
    else if(user == "paper")
        num = 2;
    else if(user == "PAPER")
        num = 2;
    else if(user == "Scissors")
        num = 3;
    else if(user == "scissors")
        num = 3;
    else if(user == "SCISSORS")
        num = 3;
    
    com = rand() % 3;
    if(com == 1)
        computer = "Rocks";
    else if(com == 2)
        computer = "Paper";
    else if(com == 3)
        computer = "Scissors";
        
    cout<<"        YOUR MOVE :       "<<user<<endl<<endl;
    cout<<"---------------------------------"<<endl<<endl;
    cout<<"     COMPUTER'S MOVE :    "<<computer<<endl<<endl;
    
    if(com == num)
        cout<<"------------DRAW-----------------"<<endl;
    else if((com == 2 && num == 1)||(com == 1 && num == 3) ) //com->paper, user->rock or com->rock, user->scissors
        cout<<"----------YOU LOST!--------------"<<endl;
    else if((com == 1 && num == 2)||(com == 3 && num == 1) )//com->rocks,user->paper or com->scissors,user->rocks
        cout<<"----------YOU WIN!---------------"<<endl;
    else if(com == 3 && num == 2)                          //com->scissors,user->paper
        cout<<"----------YOU LOST!--------------"<<endl;
    else if(com == 2 && num == 3)                          //com->paper,user->scissors
        cout<<"----------YOU WIN!---------------"<<endl;
    cout<<endl;
    return 0;
}
