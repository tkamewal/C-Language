#include<iostream>
using namespace std;
int sum(int a,int b);
//int sum(int,int); also acceptable
int main(){
int n1,n2;
cout<<"Enter the first number: "<<endl;
cin>>n1;
cout<<"Enter the second number: "<<endl;
cin>>n2;
cout<<"The sum of "<<n1<<" and "<<n2<<" is equal to "<<sum(n1,n2);

    return 0;
}
int sum(int a,int b){
    int c=a+b;
    return c;
}