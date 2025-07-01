#include<iostream>
using namespace std;
int main(){
    // int amount = 5000;
    // while (amount >= 0){
    //     int withdrawl;
    //     cout<<"Enter amount you want to withdrawl: ";
    //     cin>>withdrawl;
    //     amount -= withdrawl;
    //     cout<<"Remaining balance: "<<amount<<"\n";
    // }






    // string password = "sooyalisa29@";
    // int attempts = 3;
    // bool accessGranted = false;
    // while (attempts >= 0){
    //     string passs;
    //     cout<<"You have "<<attempts<<" attempts left."<<"\n";
    //     cout<<"Enter password: ";
    //     cin>>passs;
    //     if (passs == "sooyalisa29@"){
    //         cout<<"Access Granted!"<<endl;
    //         accessGranted = true;
    //         break;
    //     }else {
    //         cout<<"Try Again!"<<endl;
    //         attempts--;
    //     }
    // }
    // if(!accessGranted){
    //     cout<<"Account Locked!"<<endl;
    // }








    int choice = 0;
    do{
        // Display menu
        cout << "\n--- Restaurant Menu ---\n";
        cout << "1. Biryani - Rs. 300\n";
        cout << "2. Burger  - Rs. 250\n";
        cout << "3. Pizza   - Rs. 500\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"You have ordered Biryani!🍝\n";
                break;
            case 2:
                cout<<"You have ordered Burger!🍔\n";
                break;
            case 3:
                cout<<"You have ordered Pizza!🍕\n";
                break;
            case 4:
                cout<<"Thanks and come to visit again!\n";
                break;
            default:
                cout<<"Invalid choice, try again (1-4)\n";
        }
    }while(choice!=4);
    return 0;
}