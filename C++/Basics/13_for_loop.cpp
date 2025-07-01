#include<iostream>
using namespace std;
int main(){
    // simple printing
    // for(int i = 1; i <= 5; i++){
    //     cout<< i << endl;
    // }


    // even numbers
    // int limit;
    // cout<<"Till when you want to keep printing: ";
    // cin>>limit;
    // for(int i = 0; i <=limit; i+=2){
    //     cout<<i<<endl;
    // }


    // sum of all numbers
    // int sum = 0;
    // int range;
    // cout<<"Enter range: ";
    // cin>>range;
    // for(int i = 0; i <= range; i++){
    //     sum += i;
    // }
    // cout<<"Sum is: "<<sum<<endl;


    // countdown
    // for(int i = 5; i > 0; i--){
    //     cout<<i<<endl;
    // }


    // multiplication table
    // int number, limit;
    // cout<<"Which number you want to print the table: ";
    // cin>>number;
    // cout<<"Till when you want to print the table: ";
    // cin>>limit;
    // for(int i = 1; i <= limit; i++){
    //     cout<<number<<" * "<<i<<" = "<<number*i<<endl;
    // }


    //count 10s by 100
    // for(int i=0; i<=30; i+=2){
    //     cout<<i<<endl;
    // }


    //inverted half pyramid
    for(int i=5; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}