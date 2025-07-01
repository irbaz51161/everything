#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string to_lower(string s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);// transform(start, end, destination, operation)
    return s;
}

int main(){
    string word;
    cout<<"What is the Answer to the Great Question of Life, the Universe, and Everything?: ";
    getline(cin, word);
    to_lower(word);
    if (word == "42" || word == "forty two" || word == "forty-two"){
        cout<<"Yes!"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}