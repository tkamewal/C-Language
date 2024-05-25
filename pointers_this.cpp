#include<iostream>
using namespace std;
class mine{
int a,b,c;
public:
void setData(int a,int b,int c){
this->a=a; 
this->b=b;
this->c=c;
}
void getData(){
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;
}
};
int main(){
mine m;
m.setData(1,2,3);
m.getData();
return 0;
}  