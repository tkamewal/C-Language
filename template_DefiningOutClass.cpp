#include<iostream>
using namespace std;

template<class t>
class my_class{
public:
t data;
my_class(t a){
    data=a;
}
void dis();
};

template <class l>
void my_class<l>::dis(){
   cout<<" The value is...."<<data<<endl;
}

int main(){ 
my_class<int> m(10);
cout<<"The value is.."<<m.data<<endl;
m.dis();
return 0;
}  