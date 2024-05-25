#include<iostream>
using namespace std;
 class num{
int a=10;
public:
num(){}
num(int n){
    a=n;
}
num(num &obj){
    cout<<"Copy constructor called"<<endl;
    a=obj.a;
}
void disp(){
    cout<<"the number for this object is: "<<a<<endl;
}
 };
int main(){
num x,y(34),z(45);
x.disp();
y.disp();
z.disp();
num z1(y);
z1.disp();
return 0;
}  