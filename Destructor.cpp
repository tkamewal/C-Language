#include<iostream>
using namespace std;
int count=0;
class mine{
    public:
    mine(){
        count++;
        cout<<"This is the time when constructor is called for object number "<<count<<endl;

    }
    ~mine(){
cout<<"This is the time when my destructor is called for object number..."<<count<<endl;
   count--;
    }
};
int main(){
cout<<"We are inside our main function"<<endl;
cout<<"Creating first object n1"<<endl;
mine n1;
{
    cout<<"Entering this block "<<endl;
    cout<<"creating two more objects n2 and n3.. "<<endl;
   mine n2,n3;
    cout<<"Exiting this block "<<endl;
}
    cout<<"Back to main "<<endl;


return 0;
}  
