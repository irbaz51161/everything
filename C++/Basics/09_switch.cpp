#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    char oper;
    cout<<"Enter number 1 and 2: ";
    cin>>num1>>num2;
    cout<<"Enter operator (+, -, /, *, %): ";
    cin>>oper;
    switch (oper){
        case '+':
            cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
            break;
        case '-':
            cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
            break;
        case '/':
            cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
            break;
        case '*':
            cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
            break;
        case '%':
            cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
            break;
        default:
            cout<<"Try next time!"<<endl;
    }
}