#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// string to_lower(string s){
//     transform(s.begin(), s.end(), s.begin(), ::tolower);
//     return s;
// }
int main(){
    /* string greeting;
    cout<<"Greeting: ";
    getline(cin, greeting);
    string start1 = greeting.substr(0,5);
    if (to_lower(start1) == "hello"){
        cout<<"$0"<<endl;
    } else if (greeting[0] == 'H' || greeting[0] == 'h'){
        cout<<"$20"<<endl;
    }
    else{
        cout<<"$100"<<endl;
    } */
   int correct_code = 32690;
   int user_code;
   cout<<"Enter door pin: ";
   cin>>user_code;
   if (correct_code == user_code){
    cout<<"Door is opening."<<endl;
   } else{
    cout<<"Wrong PIN!"<<endl;
   }
    return 0;
}