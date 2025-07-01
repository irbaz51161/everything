#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int grade;
    
    public:

    void setDetails(string n, int g){
        name = n;
        if(g >= 0 && g <= 100){
            grade = g;
        } else {
            grade = 0;
        }
    }

    void  printDetails(){
        cout<<"Name: "<<name<<", Grade: "<<grade<<endl;
    }
};

int main(){
    Student s1;
    s1.setDetails("Louis Partridge", 292);
    s1.printDetails();
    return 0;
}