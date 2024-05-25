#include<iostream>
using namespace std;
class employee{
public:
employee(){}
int id;
float salary;
employee(int impId,float impSal){
    id=impId;
    salary=impSal;
    cout<<"The salary for the employee with id "<<id<<" is: "<<salary<<endl;
}
};

class programmer :employee{

   public:
    int langCode=9;
programmer(int empId,float empSal){
    id=empId;
    salary=empSal;
    cout<<"language code for the programmer is: "<<langCode<<endl;
    cout<<"The salary for the employee with id "<<id<<" is: "<<salary<<endl;
}
 
};


int main(){
employee h1(101,123000);
programmer p1(123,13422);
return 0;
}  