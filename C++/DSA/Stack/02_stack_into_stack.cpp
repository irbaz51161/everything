#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    stack<int> st1;
    st1.push(100);
    st1.push(3269);
    st1.push(459);
    st1.push(333);
    
    stack<int> st2(st1);
    st2.push(76);
    
    cout<<"Stack 1: "<<endl;
    print(st1);
    cout<<endl;
    cout<<"Stack 2: "<<endl;
    print(st2);

}