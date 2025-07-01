#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> numbers;
    int number;
    bool flag = true;
    cout<<"Enter numbers (-1 to stop): ";
    while (flag){
        cin>>number;
        if(number!=-1){
            numbers.push_back(number);
        }
        else{
            flag = false;
        }
    }
    double sum, average = 0;
    for(int i=0; i<numbers.size(); i++){
        cout<<numbers[i]<<" ";
        sum+=numbers[i];
    }
    average = sum/numbers.size();
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<average<<endl;
}