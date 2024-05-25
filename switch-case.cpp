#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    cout<<"Entered number is... "<<num<<endl;

    switch(num){
        case 0:
        cout<<"you have entered zero";
        break;
        case 1:
        cout<<"you have entered one";
        break;
        case 2:
        cout<<"you have entered two";
        break;
        default:
        cout<<"Number entered is except 0,1,2";
    }
    return 0;
}