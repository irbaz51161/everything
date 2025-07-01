#include<iostream>
using namespace std;
class A{
    protected:
        int wheels;
    public:
        void kia(){
            cout<<"What you looking at?"<<endl;
        }

        void setWheels(int w){
            wheels = w;
        }
};

class B{
    public:
        void kiakia(){
            cout<<"Just STOP IT!"<<endl;
        }   
};

class C: public A, public B{
    public:
        void showWheels(){
            cout<<"Your vehicle has "<<wheels<<" wheels."<<endl;
        }
};

int main(){
    C obj;
    obj.setWheels(7);
    obj.showWheels();
    return 0;
}