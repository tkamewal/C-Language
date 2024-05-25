#include<iostream>
using namespace std;

template <class T1=int, class T2=float>
class tanmay{
public:
T1 a;
T2 b;
tanmay(T1 x,T2 y){
a=x;
b=y;
}
void disp(){
    cout<<"The value of a and b is: "<<a<<" and "<<b<<endl;

}
};


int main(){
tanmay<> tm(2,23.2); 
tm.disp();
tanmay<float,char> tm1(2.4,'c'); 
tm1.disp();
return 0;
}  