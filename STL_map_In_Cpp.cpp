#include<iostream>
#include<map>
// #include<string>
using namespace std;

//map is an associative array
int main(){
map<string, int> marksMap;
marksMap["tanmay"]=99;
marksMap["rohit"]=86;
marksMap["rohan"]=85;

marksMap.insert({{"new1",78},{"new2",88}});

map<string, int>:: iterator iter;

for(iter=marksMap.begin();iter!=marksMap.end();iter++){
    cout<<(*iter).first<<" : "<<(*iter).second<<"\n";
}

cout<<"The size is: "<<marksMap.size()<<endl;
cout<<"The max_size is: "<<marksMap.max_size()<<endl;
cout<<"The empty's return value is: "<<marksMap.empty()<<endl;

return 0;
}  