#include<iostream>
using namespace std;
 class base1{
int data1;
public:
base1(int i){
    data1=i;
    cout<<"Base1 class constructor called"<<endl;
}
void printData1(void){
    cout<<"The value of data1  is: "<<data1<<endl;
}
 };
 class base2{
int data2;
public:
base2(int i){
    data2=i;
    cout<<"Base2 class constructor called"<<endl;
}
void printData2(void){
    cout<<"The value of data2  is: "<<data2<<endl;

  } };
  class derived:public base1,public base2{
int data3;
public:
derived(int a,int b,int c):base1(a),base2(b){
    data3=c;
      cout<<"Derived class constructor called.."<<endl;
}
void printData3(void){
    cout<<"The value of data3  is: "<<data3<<endl;

  }
};
int main(){
derived d(2,3,4);
d.printData1();
d.printData2();
d.printData3();
return 0;
}  