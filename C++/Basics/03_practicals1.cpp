#include<iostream>
using namespace std;
int main(){
    // Student data;
    int studentID = 100;
    string studentName = "Muhammad Irbaz Karamat";
    int age = 22;
    double fee = 720.13;
    char studentGrade = 'B';
    cout<<"Student ID: "<<studentID<<endl;
    cout<<"Student Name: "<<studentName<<endl;
    cout<<"Student Age: "<<age<<endl;
    cout<<"Student Fee: $"<<fee<<endl;
    cout<<"Student Grade: "<<studentGrade<<endl;
    //Area of RECTNAGLE = w*l
    double width, length;
    cout<<"Enter width: ";
    cin>>width;
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Area of Rectangle is: "<<width * length<<"\n";
    //Circumference of circle
    const double pi = 3.14159;
    double radius;
    cout<<"Enter radius: ";
    cin>>radius;
    cout<<"Circumference of circle is: "<<2 * radius * pi<<"\n";
    return 0;
}