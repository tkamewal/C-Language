#include <iostream>
using namespace std;
class employee
{
    int id;
    static int Count;

public:
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        Count++;
    }
    void getData(void)
    {
        cout << "The employee id id: " << id<<" and this is employee number "<<Count << endl;
    }
};
    int employee::Count; 
int main()
{
    employee e1;
    e1.setData();
    e1.getData();
    return 0;
}