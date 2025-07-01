#include<iostream>
using namespace std;

class BankAccount{
    private:
        string accountHolder;
        int balance;
    public:
        BankAccount(string aH, int b);
        void display();
};

BankAccount::BankAccount(string aH, int b){
        accountHolder = aH;
        balance = b;
}

void BankAccount::display(){
    cout<<"Account Holder: "<<accountHolder<<"\n";
    cout<<"Balance: $"<<balance<<"\n";
}

int main(){
    string name;
    int money;
    cout<<"Enter name: ";
    getline(cin, name);
    cout<<"Enter your balance: ";
    cin>>money;
    BankAccount b1(name, money);
    BankAccount b2("Shahid", 34);
    BankAccount b3("Haleema Sadia", 7792);
    b1.display();
    b2.display();
    b3.display();

    return 0;
}