#include<iostream>
using namespace std;
int a=22; //Global variable
int n=34;
 void sum(){
        int c=20;//this is local variable
        cout<<"value is "<<c;
        cout<<"value is "<<a;
        cout<<"value is "<<n;
        cout<<"value is "<<n;
    }
int main(){
    int a=10; //this is local variable
   sum();
    // cout<<"value is "<<c;
        cout<<"value is "<<a;
        cout<<"value is "<<n;
        cout<<"value is "<<n;
        cout<<"value is "<<n;
        cout<<"value is "<<n;


    }
