#include<iostream>
#include<fstream>
using namespace std;

int main(){
// ofstream out;
// //using member function open()
// out.open("base.txt");
// out<<"This is open() function..."<<endl;
// out<<"This is open() function...";
// out.close();


ifstream in;
in.open("base1.txt");
string st,st2;
// in>>st;
// getline(in,st);
in>>st>>st2;
cout<<st<<" "<<st2;
in.close();
return 0;
}  