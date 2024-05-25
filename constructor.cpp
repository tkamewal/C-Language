#include<iostream>
using namespace std;
class comp{
int a,b;
public:
 comp(void); 
 void printNum(void){
    cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
 }
};
comp::comp(void){
    a=10;
    b=0;
}
int main(){
comp c;
c.printNum();
return 0;
}  