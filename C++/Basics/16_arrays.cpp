#include<iostream>
using namespace std;
int main(){
    // string cars[4] = {"Volvo", "BMW", "Suzuki", "Havel"};  // array of string
    // cars[2] = "MG";
    // for(int i=0; i<4; i++){
    //     cout<<i<<" = "<<cars[i]<<endl;
    // }


    // Create an array of integers
    // int myNumbers[5] = {10, 20, 30, 40, 50};

    // // Loop through integers
    // for (int i : myNumbers) {
    // cout << i << "\n";
    // }


    // User input array and SUM OF ALL
    // int userArray[5];
    // int sum = 0;
    // for(int i=0; i<5; i++){
    //     cout<<"Enter value at index \""<<i<<"\": ";
    //     cin>>userArray[i];
    // }
    // for(int i=0;i<5;i++){
    //     sum += userArray[i];
    // }
    // cout<<"The total sum is: "<<sum<<endl;


    // finding the LARGEST NUMBER from the array
    // int userArray[10];
    // for(int i=0; i<10; i++){
    //     cout<<"Enter value at index \""<<i<<"\": ";
    //     cin>>userArray[i];
    // }
    // int max = userArray[0];
    // for(int i=0; i<10; i++){
    //     if (userArray[i] > max){
    //         max = userArray[i];
    //     }
    // }
    // cout<<"The max number from the array is: "<<max<<endl;


    //Count Frequency of Each Number (1–10)
    // int userArray[20];
    // int counter[11]={0};
    // for(int i=0; i<20; i++){
    //     cout<<"Enter value at index \""<<i<<"\": ";
    //     cin>>userArray[i];
    //     if(userArray[i]>=1 && userArray[i]<=10){
    //         counter[userArray[i]]++;
    //     }
    //     else{
    //         cout<<"You enter invalid number! Try again!"<<endl;
    //         i--;
    //     }
    // }
    // cout << "\nFrequency of numbers:\n";
    // for (int i = 1; i <= 10; i++) {
    //     cout << i << " appears " << counter[i] << " time(s)\n";
    // }


    // counting vowels from words
    string words[5];
    char vowels[5] = {'a','e','i','o','u'};
    cout<<"Enter words: "<<endl;
    for(int i=0; i<5; i++){
        cin>>words[i];
    }
    for(int i=0; i<5; i++){
        int count = 0;
        for(int j=0; j<words[i].length(); j++){
            char ch = tolower(words[i][j]);
            for(int k=0; k<5; k++){
                if (ch == vowels[k]){
                    count++;
                    break;
                }
            }
        }
        cout<<"Word: "<<words[i]<<" ---> Vowels: "<<count<<endl;
    }
    return 0;
}