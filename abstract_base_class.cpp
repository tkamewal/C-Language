#include <iostream>
using namespace std;
class base
{
    int a, b;

public:
base(){}
    base(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    virtual void disp()=0;
};
class der1 : public base
{
public:
    void disp()
    {
        cout << "This is derived class 1"<<endl;
    }
};
class der2 : public base
{
public:
    void disp()
    {
        cout << "This is derived class 2"<<endl;
    }
};
int main()
{
    base *base_ptr1;
    base *base_ptr2;
    der1 der1_obj;
    der2 der2_obj;
    
    base_ptr1=&der1_obj;
    base_ptr1->disp();
    base_ptr2=&der2_obj;
    base_ptr2->disp();
    return 0;
}