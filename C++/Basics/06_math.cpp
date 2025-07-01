#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x, y, z;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    cout<<"Maximum: "<<max(x, y)<<endl;
    cout<<"Minimum: "<<min(x, y)<<endl;
    cout<<"OTHER HIGH LEVEL MATHS FUNCTIONS:"<<"\n";
    double sqrtt, roundd, logg;
    cout<<"Enter sqrt number: ";
    cin>>sqrtt;
    cout<<"Enter round number: ";
    cin>>roundd;
    cout<<"Enter log value: ";
    cin>>logg;
    cout<<"Square Root: "<<sqrt(sqrtt)<<endl;
    cout<<"Rounded number: "<<round(roundd)<<endl;
    cout<<"Log value: "<<log(logg)<<endl;
    cout<<"Sin of x is: "<<asin(0.64)<<endl;
    return 0;
}