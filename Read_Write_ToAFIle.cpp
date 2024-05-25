#include<iostream>
#include<fstream>
using namespace std;
 
int main(){
 ofstream  out("new.txt");
 string sn;
 cout<<"Enter your name "<<endl;
 cin>>sn;
 out<<sn;
out.close();


 ifstream in("new2.txt");
 string stn;
 getline(in,stn);
 in>>stn;
 cout<<"The content of the file is: "<<stn<<endl;
 in.close();
return 0;
}  