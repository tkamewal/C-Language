#include<iostream>
using namespace std;


class employee
{
private:
int a,b,c;
public:
int d,e;
void setData(int a1,int b1,int c1);
void getData(){
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of d is "<<d<<endl;
    cout<<"The value of e is "<<e<<endl;
}
};
void employee :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
employee my;
my.setData(1,2,3);
my.d=4;
my.e=5;
// my.a=10; this will produce error as a is private
my.getData();
return 0;
}  