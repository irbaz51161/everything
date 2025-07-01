#include<iostream>
using namespace std;
int main(){
    // for(int i = 1; i <= 3; i++){
    //     cout<<"Outer loop: "<<i<<endl;
    //     for(int j = 1; j <= 5; j++){
    //         cout<<" Inner loop: "<<j<<endl;
    //     }
    // }


    //RIGHT PYRAMID
    // for(int i = 1; i <= 5; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<"#";
    //     }
    //     cout<<"\n";
    // }


    //LEFT PYRAMID
    // for(int i=1; i<=5; i++){
    //     for(int space=1; space<=5-i; space++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    //NUMBER PYRAMID
    // int rows;
    // cout<<"Enter number of rows: ";
    // cin>>rows;
    // for(int i=1; i<=rows; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //FULL PYRAMID
    char input, alphabet = 'A';
    cout<<"Enter the uppercase character you want to print in the last row: ";
    cin>>input;
    input = toupper(input);
    for(int i=1; i<=(input-'A'+1); i++){
        for(int j=1; j<=i; j++){
            cout<<alphabet<<" ";
        }
        alphabet++;
        cout<<endl;
    }
}