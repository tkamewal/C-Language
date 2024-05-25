#include<iostream>
using namespace std;

class shop{
int id;
float price;
public:
void setData(int a,float b){
    id=a;
    price=b;
}

void getData(){
    cout<<"The price for object with id "<<id<<" is: "<<price<<endl;
} 
};

int main(){
shop *pt=new shop[5];
// (pt+0)->setData(1,10);
// (pt)->getData();
// (pt+1)->setData(2,20);
// (pt+1)->getData();
// (pt+2)->setData(3,50);
// (pt+2)->getData();
// (pt+3)->setData(4,200);
// (pt+3)->getData();
// (pt+4)->setData(5,10000);
// (pt+4)->getData();
int p;
float q;
for(int i=0;i<5;i++){
    cout<<"Enter id and price of item "<<i+1<<endl;
    cin>>p>>q;
    (pt+i)->setData(p,q);
    (pt+i)->getData();
}

return 0;
}  