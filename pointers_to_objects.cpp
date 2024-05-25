#include<iostream>
using namespace std;
class complex{
int real,imaginary;
public:
void getData(){
    cout<<"the real part is "<<real<<endl;
    cout<<"the imaginary part is "<<imaginary<<endl;
}
void setData(int a,int b){
    real=a;
    imaginary=b;
}
};
int main(){
// complex c1;
// complex *ptr=&c1; 
complex *ptr=new complex;
// array of objects
// complex *ptr=new complex[3];
// (*ptr).setData(1,2);
// (*ptr).getData();
ptr->setData(1,2);
ptr->getData();
return 0;
}  