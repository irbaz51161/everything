/* simply means hum aek variable ki value kisi or variable me store kr sakty he or dono ki same
memory ho gi or value bhi, if we will change even one value,
2nd one yahan hum ne regference kia h wo bhi change ho jae gi. */

// A reference is another name (alias) for an existing variable.

#include<iostream>
using namespace std;
int main(){
    int b = 69;
    int& ref = b;
    cout<<"b = "<<b<<endl;
    cout<<"ref = "<<ref<<endl;
    string l = "azaab";
    string& oops = l;
    cout<<"---- BEFORE ----"<<endl;
    cout<<"l = "<<l<<endl;
    cout<<"oops = "<<oops<<endl;
    l = "zenn";
    cout<<"---- AFTER ----"<<endl;
    cout<<"l = "<<l<<endl;
    cout<<"oops = "<<oops<<endl;
    return 0;
}