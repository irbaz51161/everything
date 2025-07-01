#include<iostream>
using namespace std;

class Animal{
    public:
        void sound(){
            cout<<"Animal amkes a sound!"<<endl;
}
};

class Dog : public Animal{
    public:
        void bark(){
            cout<<"Bow bow! Dog braks!"<<endl;
        }
};

int main(){
    Dog d1;
    d1.sound();
    d1.bark();
    return 0;
}