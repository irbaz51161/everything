#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    int values, st_value;
    cout<<"How many value you want to enter into the stack: ";
    cin>>values;
    for(int i=0; i<values; i++){
        cin>>st_value;
        st.push(st_value);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}