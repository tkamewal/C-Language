#include<iostream>
using namespace std;
class comp{
int a,b;
public:
comp(int x,int y=9){
    a=x;
    b=y; 
}
void print(){
    cout<<"Value of a is "<<a<<" and b is: "<<b<<endl;
}
};
int main(){
comp c1(3);
c1.print();
comp c2(3,123);
c2.print();
return 0;
}  