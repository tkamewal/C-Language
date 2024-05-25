#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "How are you" << endl;
    }
};

class base2
{
    public:
    void greet()
    {
        cout << "Have a nice day" << endl;
    }
};

class derived : public base1, public base2
{
public:
   void greet(){
    base2::greet();
   }
};
int main()
{
    derived d1;
    d1.greet();
    return 0;
}