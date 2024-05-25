#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;



int main(){

int arr[]={23,45,1,32,45,76,87,789,89};
// sort(arr,arr+9);
sort(arr,arr+9,greater<int>());
for (int i = 0; i < 9; i++)
{
cout<<arr[i]<<" ";

}

return 0;
}  