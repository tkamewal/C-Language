#include<iostream>
using namespace std;
class base{
public:
int var_base=10;
void display(){
    cout<<"Displying base class variable "<<var_base<<endl;
}
};

class derived : public base{
  public:
  int var_derived=20;
  void display(){
    cout<<"Displying base class variable "<<var_base<<endl;
    cout<<"Displying derived class variable "<<var_derived<<endl;

  }
};
int main(){
base *baseClassPointer;
derived obj2;
base obj1;
baseClassPointer=&obj2;
baseClassPointer->var_base=100;
baseClassPointer->display();

// baseClassPointer-->var_derived=123; this will throw error
derived *derivedClassPointer=&obj2;
derivedClassPointer->var_base=230;
derivedClassPointer->var_derived=1230;
derivedClassPointer->display();
return 0;
}  