#include<iostream>
using namespace std;

// float funcAverage(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template <class T>
void swapp(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}

int main(){
float a;
a=funcAverage(5.23456543,6);
cout<<a<<endl;

// int x=5,y=10;
// swapp(x,y);
// cout<<x<<endl<<y;

float n=5.3,m=1.02;
swapp(n,m);
cout<<n<<endl<<m;
return 0;
}  