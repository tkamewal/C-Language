#include<iostream>
using namespace std;
int main(){
    int a=45;
    float b=56.543;

    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of a is "<<float(a)+b<<endl;
    cout<<"The value of a is "<<int(b)+a<<endl;
    return 0;
}