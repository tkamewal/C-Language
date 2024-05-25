#include<iostream>
using namespace std;
int main(){
int a=4;
int* ptr=&a;

cout<<"a is "<<*(ptr)<<endl;

// New Keyword
int *p1=new int(40);
cout<<"the value at address p1 is "<<*(p1)<<endl;
float *p2=new float(40.23);
cout<<"the value at address p2 is "<<*(p2)<<endl;

int *ar=new int[3];
ar[0]=23;
ar[1]=123;
ar[2]=1234;
cout<<"the value of ar[0] is "<<ar[0]<<endl;
cout<<"the value of ar[1] is "<<ar[1]<<endl;
cout<<"the value of ar[2] is "<<ar[2]<<endl;


// delete operator
 delete[] ar;
 cout<<"After delete"<<endl;
cout<<"the value of ar[0] is "<<ar[0]<<endl;
cout<<"the value of ar[1] is "<<ar[1]<<endl;
cout<<"the value of ar[2] is "<<ar[2]<<endl;


return 0;
}  