#include<iostream>
using namespace std;
int fib(int n){
    if (n<2)
    {
        return 1;
    }
    
return (fib(n-2)+fib(n-1));

}
int main(){
int n;
cout<<"Enter the number till you want fibonacci series..."<<endl;
cin>>n;
cout<<"Fibonacci series till "<<n<<" numbers are..."<<endl;
for (int i = 0; i < n; i++)
{
    cout<<fib(i)<<endl;
}

return 0;
}  