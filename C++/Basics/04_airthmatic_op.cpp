#include<iostream>
using namespace std;
int main(){
    int students = 25;
    students+=3;
    students--;
    // students/=2;
    students*=3;
    int reminder = students % 3;
    cout<<students<<endl;
    cout<<reminder<<endl;
}