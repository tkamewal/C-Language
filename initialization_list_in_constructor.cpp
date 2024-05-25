#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(i + j)
    // test(int i, int j) :b(j), a(b+i) this will produce garbage value of a as a is declared/initialized before b
    test(int i, int j) : a(i), b(a + j)
    {
        cout << "Constructor Executed" << endl;
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }
};
int main()
{
    test p(123, 321);
    return 0;
}