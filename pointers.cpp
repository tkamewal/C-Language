#include<iostream>
using namespace std;
int main(){
int a=30;
int* b= &a;
cout<<"the address of a is: "<<b<<endl;
cout<<"the address of a is: "<<&a<<endl;
cout<<"the value at address b stored is: "<<*b<<endl;

//pointer to pointer
int**c =&b;
cout<<"the address of b is: "<<&b<<endl;
cout<<"the address of b is: "<<c<<endl;
cout<<"the value at address c stored is: "<<*c<<endl;
cout<<"the value at address value at(value at(c)) is : "<<**c<<endl;

    return 0;
}