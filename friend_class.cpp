#include <iostream>
using namespace std;
class complex;
class calc
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex o1, complex o2);
};
class complex
{
    int a, b;
    friend int calc::sumRealComplex(complex o1, complex o2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void PrintNumber(void)
    {
        cout << "The complex number is..." << a << " + " << b << "i" << endl;
    }
};
int calc::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int main()
{
    complex o1, o2;
    o1.setNumber(1, 2);
    o2.setNumber(3, 5);
    calc cl;
    int res = cl.sumRealComplex(o1, o2);
    cout << "The real part of o1 and o2 is " << res << endl;

    return 0;
}