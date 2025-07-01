#include<iostream>
using namespace std;

class Student {            // declaring class
    public:
        string name;
        int age;

        void introduce(){
            cout<<"Hi! I am "<<name<<" and I am "<<age<<endl;
        }
};

class Car{
    public:
        string brand;
        int year;

        void infoCar(){
            cout<<"Brand: "<<brand<<"\n";
            cout<<"Year: "<<year<<"\n";
        }
};

int main(){
    Student s1;        // declaring object
    s1.name = "Irbaz Karamat";
    s1.age = 22;
    s1.introduce();
    Car car1, car2;
    car1.brand = "Mercedes";
    car1.year = 2026;
    car1.infoCar();
    car2.brand = "Suzuki";
    car2.year = 2000;
    car2.infoCar();

    return 0;
}