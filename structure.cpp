 #include<iostream>
 using namespace std;
struct employee
{
    int id;
    int age;
    char favCharacter;
};
 int main(){
struct employee tanmay;
tanmay.id=101;
tanmay.age=19;
tanmay.favCharacter='t';
cout<<"The information about employee tanmay is: "<<endl;
cout<<"ID: "<<tanmay.id<<endl;
cout<<"AGE: "<<tanmay.age<<endl;
cout<<"FAV_CHARACTER: "<<tanmay.favCharacter<<endl;

    return 0;
 }