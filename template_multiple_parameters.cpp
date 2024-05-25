#include<iostream>
using namespace std;

template<class T1, class T2>
class myClass{
public:
T1 data1;
T2 data2;

myClass(T1 a,T2 b){
    data1=a;
    data2=b;
}

void display(){
    cout<<"the value of data1 is  "<<data1<<" and data2 is "<<data2<<endl;
}
};
int main(){
myClass<char, char> obj('2','t');
obj.display();
return 0;
}  