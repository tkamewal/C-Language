#include<iostream>
#include<fstream>
using namespace std;

int main(){

ifstream in;
in.open("new1.txt");
string st; 
while(in.eof()==0){
    getline(in,st);
    cout<<st<<endl;
}
in.close();
return 0; 
}