#include<iostream>
using namespace std;
class complex {
int a,b;
public:
void setNumber(int n1, int n2){
    a=n1;
    b=n2;
}
friend complex sumComplex(complex o1,complex o2);
void PrintNumber(void){
    cout<<"The complex number is..."<<a<<" + "<<b<<"i"<<endl;
}
};
complex sumComplex(complex o1,complex o2){
    complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
complex c1,c2,c3;
c1.setNumber(1,5);
c1.PrintNumber();
c2.setNumber(8,3);
c2.PrintNumber();

c3=sumComplex(c1,c2);
c3.PrintNumber();
return 0;
}  