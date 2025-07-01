#include<iostream>
using namespace std;

void greet(){
    cout<<"Hello! Nice to meet you!"<<endl;
}

int callNumber(){
    return 3269;
}

void printSquare(int x){
    cout<<"Square of "<<x<<" is "<<x *x<<endl;
}

int mul(int a, int b){
    return a*b;
}

int main(){
    cout<<"No return, no parameters:    ";
    greet();                                               // No return, no parameters
    cout<<"Return, no parameters:       "<<callNumber()<<endl;;  // return, no parameters
    cout<<"No return, parameters:       ";
    printSquare(7);
    int result = mul(5, 8);
    cout<<"Return, parameters:          ";
    cout<<result<<endl;
    
    return 0;
}