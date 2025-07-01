#include<iostream>
#include<cmath>
using namespace std;

void area(int a){
    int square = a*a;
    cout<<"Area of square is: "<<square<<endl;
}

void area(int b, int c){
    int rectangle = b*c;
    cout<<"Area of rectangle is: "<<rectangle<<endl;
}

void area(double r){
    double circle = M_PI * pow(r, 2);
    cout<<"Area of circle is: "<<circle<<endl;
}



int main(){
    area(6);
    area(4, 8);
    area(2.7);
    return 0;
}