#include<iostream>
using namespace std;
class complex{
int a,b;
public:
complex(int x,int y){
    a=x;
    b=y; 
}
void printNumber(void){
    cout<<"The value of a is "<<a<<" and value of b is "<<b<<endl;
}
complex(int x){
    a=x;
    b=0;
}
};
int main(){
complex c1(3,4);
c1.printNumber();  
complex c2(5);
c2.printNumber();  
return 0;
}  