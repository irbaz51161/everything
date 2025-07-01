#include<iostream>
#include<string>
using namespace std;
int main(){
    string firstName, lastName, fullName;
    cout<<"Enter your first name: ";
    getline(cin, firstName);
    cout<<"Enter your last name: ";
    getline(cin, lastName);
    fullName = firstName+" "+lastName;
    cout<<"Your full name is: "<<fullName<<"\n";
    // Length
    cout<<"The length of your name is: "<<fullName.length()<<"\n";
    //OR
    cout<<"The length of your name is: "<<fullName.size()<<"\n";
    // indexing
    string myString = "digital image processing";
    cout << myString[8] << "\n";
    cout << myString[myString.length() - 1] << "\n"; 
    cout << myString.back() << "\n";   // this will also print back the last value!
    myString[0] = 'D';
    myString[8] = 'I';
    myString[14] = 'P';
    cout<<"myString is: "<<myString<<endl;

    return 0;
}