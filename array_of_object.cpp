#include<iostream>
using namespace std;
class emp{
int id;
int salary;
public:
void setId(void){
    salary=122;
    cout<<"Enter the id of employee:-"<<endl;
    cin>>id;
}
void getId(void){
    cout<<"The id of employee is:-"<<id<<endl;
}
};
int main(){
emp fb[5];
for (int  i = 0; i < 4; i++)
{
    fb[i].setId();
    fb[i].getId();
}

return 0;
}  