#include <iostream>
using namespace std;
class base
{
protected:
    int a;

private:
    int b;
};

class derived :protected base
{
};

int main()
{
base b;
derived d;
// cout<<b.a; this will error as a is protected in both base and derived
    return 0;
}