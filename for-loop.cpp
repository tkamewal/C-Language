#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you want table of: "<<endl;
    cin>>n;
    cout<<"The table of "<<n<<" is: "<<endl;
    for(int i=1;i<11;i++){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}