#include<iostream>
using namespace std;
int main(){
int array[]={12,34,56,78};
int *ptr=array;
cout<<"The value of *ptr is: "<<*ptr<<endl;
cout<<"The value of *(ptr+1) is: "<<*(ptr+1)<<endl;
cout<<"The value of *(ptr+2) is: "<<*(ptr+2)<<endl;
cout<<"The value of *(ptr+3) is: "<<*(ptr+3)<<endl;
cout<<*ptr<<endl;
cout<<*ptr++<<endl;
cout<<*ptr++<<endl;
    return 0;
}