 #include<iostream>
 using namespace std;
union employee
{
    int id;
    int age;
    char favCharacter;
};
 int main(){
union employee tanmay;
tanmay.id=101;
tanmay.age=19;
tanmay.favCharacter='t';
cout<<"The information about employee tanmay is: "<<endl;
cout<<"ID: "<<tanmay.id<<endl;
cout<<"AGE: "<<tanmay.age<<endl;
cout<<"FAV_CHARACTER: "<<tanmay.favCharacter<<endl;

    return 0;
 }