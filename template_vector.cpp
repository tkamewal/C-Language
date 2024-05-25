#include<iostream>
using namespace std;

template <class T>
class vector{
public:
T *arr;
int size;
vector(int m){
    size=m;
    arr=new T[size];
}
T dotProduct(vector &v)
{
T d=0;
for (int i = 0; i < size; i++)
{
    d+= this->arr[i] *v.arr[i];
}
return d;
}
}; 

int main(){

vector <int> v1(3);
v1.arr[0]=3;
v1.arr[1]=4;
v1.arr[2]=5;
vector <int> v2(3);
v2.arr[0]=3;
v2.arr[1]=5;
v2.arr[2]=8;
int a=v1.dotProduct(v2);
cout<<a<<endl;


vector <float> v3(3);
v3.arr[0]=3.2;
v3.arr[1]=4.5;
v3.arr[2]=5.9;
vector <float> v4(3);
v4.arr[0]=3.3;
v4.arr[1]=5.01;
v4.arr[2]=8.23;
float b=v3.dotProduct(v4);
cout<<b<<endl;
return 0;
}  