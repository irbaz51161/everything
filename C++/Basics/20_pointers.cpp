// A pointer is a variable that stores the memory address of another variable.

#include<iostream>
using namespace std;
int main(){
    // int num = 24;
    // int* ptr = &num;
    // cout<<"num = "<<num<<endl;
    // cout<<"*ptr: "<<*ptr<<endl;
    
    int a = 32;
    int b = 97;
    int* ptr1 = &a;    //pointer allocated
    *ptr1 = 44;        //a becomes 44

    ptr1 = &b;
    *ptr1 = 543;
    
    cout<<"Ptr1 is: "<<*ptr1<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
}