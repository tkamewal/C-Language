#include<iostream>
using namespace std;
int c=32;
int main(){
    int a,b,c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum of both is: "<<c<<endl;
    cout<<"The value of global c is: "<<::c<<endl;
    return 0;
}