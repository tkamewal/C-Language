#include<iostream>
using namespace std;
class money{
int principal;
int years;
float intrestRate;
float returnValue;
public:
money(){

}
money(int p,int y,float r){
principal=p;
years=y;
intrestRate=r;
returnValue=principal;
for (int i = 0; i < y; i++)
{
    returnValue=returnValue * (1+r);
}
}
void show(void){
    cout<<endl<<"Principal ammount was "<<principal<<endl<<" Return value after "<<years<<" years is "<<returnValue<<endl;
}
};
int main(){
    money m1,m2,m3,m4;
  int p,y;
    float r;

    cout<<"Enter the value of p, y, r"<<endl;
    cin>>p>>y>>r;
    m1=money(p,y,r);
    m1.show();

return 0;
}  