#include<iostream>
using namespace std;

int maxx(int a, int b){
    return max(a, b);
}

void greeting(string &str){
    str += " World!";
}

void funcArr(int aN[3]){
    for(int i=0; i<3; i++){
        cout<<aN[i]<<" ";
    }
}

int main(){
    int y, z;
    cout<<"Enter y: ";
    cin>>y;
    cout<<"Enter z: ";
    cin>>z;
    cout<<"The maximum is: "<<max(y, z)<<endl;

    string greet = "Hello";
    greeting(greet);
    cout<<greet<<endl;

    int arrNum[3] = {4,4,6};
    funcArr(arrNum);
    return 0;
}