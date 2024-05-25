#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<12;i++){
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }
    cout<<"So you can see 2 will not print and loop not exits it runs continously ...";
    return 0;
}