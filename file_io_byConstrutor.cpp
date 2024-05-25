#include<iostream>
#include<fstream>
using namespace std;
  
int main(){
    string st="my name is tanmay...";
 //opening files using constructor
ofstream out("sample.txt"); //write operation
out<<st;
                                    
//opening files using constructor and reading it
string st2;
ifstream in("sample2.txt");
// in>>st2;  this will read only firt word till space not found!
getline(in,st2);
getline(in,st2);
cout<<st2;
return 0;
}  