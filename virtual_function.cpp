#include<iostream>
using namespace std;
 class base{
public:
int var_base=10;
virtual void display(){
    cout<<"1 Displying base class variable "<<var_base<<endl;
}
};

class derived : public base{
  public:
  int var_derived=20;
   void display(){
    cout<<"2 Displying base class variable "<<var_base<<endl;
    cout<<"2 Displying derived class variable "<<var_derived<<endl;

  }
};
int main(){
base *base_class_pointer;
base obj_base;
derived obj_derived;
base_class_pointer=&obj_derived; 
base_class_pointer->display();

return 0;
}
