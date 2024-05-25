#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if((age>=18) && (age>0)){
        cout<<"You are eligiable to vote!!"<<endl;
    }
    else if((age<18)&&(age>0)){
        cout<<"You cannot vote till 18!"<<endl;
    }
    else{
        cout<<"please enter a valid age"<<endl;
    }
    return 0;
}