#include<iostream>
using namespace std;
int main(){
    int n,mark1[20];
  cout<<"Enter the number of elements you want to store in array: "<<endl;
  cin>>n;
  cout<<"Enter "<<n<<" Elements: "<<endl;
  for (int i = 0; i < n; i++)
  {
    cin>>mark1[i];
  }
  cout<<"Elements entered are: "<<endl;
  for(int i=0;i<n;i++){
    cout<<mark1[i]<<" ";
  }
  return 0;
}