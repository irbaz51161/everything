#include<iostream>
using namespace std;
int main(){
    struct {
        string name;
        int age;
        int id;
        int height;
    }Person1, Person2;
    cout<<"FOR PERSON 1: "<<endl;
    cout<<"Enter your name: ";
    getline(cin, Person1.name);
    cout<<"Enter your age: ";
    cin>>Person1.age;
    cout<<"Enter your id number: ";
    cin>>Person1.id;
    cout<<"Enter your height in feets: ";
    cin>>Person1.height;
    cout<<"FOR PERSON 2: "<<endl;
    cout<<"Enter your name: ";
    cin.ignore();
    getline(cin, Person2.name);
    cout<<"Enter your age: ";
    cin>>Person2.age;
    cout<<"Enter your id number: ";
    cin>>Person2.id;
    cout<<"Enter your height in feets: ";
    cin>>Person2.height;
    cout<<"--------- PERSON 1 ---------"<<endl;
    cout<<"Name:            "<<Person1.name<<endl;;
    cout<<"Age:             "<<Person1.age<<endl;
    cout<<"ID:              "<<Person1.id<<endl;
    cout<<"Height:          "<<Person1.height<<endl;
    cout<<"--------- PERSON 2 ---------"<<endl;
    cout<<"Name:            "<<Person2.name<<endl;;
    cout<<"Age:             "<<Person2.age<<endl;
    cout<<"ID:              "<<Person2.id<<endl;
    cout<<"Height:          "<<Person2.height<<endl;
}