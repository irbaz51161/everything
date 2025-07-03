#include<iostream>
#include<ctime>
using namespace std;

char getUserInput();
char getComputerInput();
void showChoice(char choice);
void winner(char choice, char comp_choice);

int main(){
    char player;
    char computer_choice;
    player = getUserInput();
    cout<<"Your choice: ";
    showChoice(player);
    computer_choice = getComputerInput();
    cout<<"Computer choice: ";
    showChoice(computer_choice);
    winner(player, computer_choice);
    return 0;
}

char getUserInput(){
    char choice;
    cout<<"======== ROCK - PAPER - SCISSOR ========"<<endl;
    do{
        cout<<"Enter your choice (r-p-s): "<<endl;
        cout<<"r for Rock"<<endl;
        cout<<"p for Paper"<<endl;
        cout<<"s for Scissor"<<endl;
        cin>>choice;
    }
    while(choice != 'r' && choice != 'p' && choice != 's');
    return choice;
}

char getComputerInput(){
    srand(time(0));
    int num = rand() % 3 + 1;
    switch (num)
    {
    case 1 : return 'r';
    case 2 : return 'p';
    case 3 : return 's';
    }
}

void showChoice(char choice){
    switch (choice)
    {
    case 'r' : cout<<"Rock"<<endl;
        break;
    case 'p' : cout<<"Paper"<<endl;
        break;
    case 's' : cout<<"Scissor"<<endl;
        break;
    }
}

void winner(char choice, char comp_choice){
    switch(choice){
        case 'r' : if(comp_choice == 'r'){
            cout<<"It's a tie. \n";
        } else if(comp_choice == 'p'){
            cout<<"Computer wins. \n";
        } else{
            cout<<"You win! \n";
        }
            break;
        case 'p' : if(comp_choice == 'p'){
            cout<<"It's a tie. \n";
        } else if(comp_choice == 's'){
            cout<<"Computer wins. \n";
        } else{
            cout<<"You win! \n";
        }
            break;
        case 's' : if(comp_choice == 's'){
            cout<<"It's a tie. \n";
        } else if(comp_choice == 'r'){
            cout<<"Computer wins. \n";
        } else{
            cout<<"You win! \n";
        }
            break;
}
}