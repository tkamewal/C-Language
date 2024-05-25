#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst){
list<int>::iterator it;
for (it=lst.begin(); it != lst.end(); it++)
{
    cout<<*it<<" ";
}
cout<<endl;
}

int main(){
list<int> list1; //list of 0 length

list1.push_back(5);
list1.push_back(15);
list1.push_back(4);
list1.push_back(6);
list1.push_back(78);
list1.push_back(6);
list1.push_back(56);
list1.push_back(90);
display(list1);
// list1.pop_back();
// display(list1);
// list1.pop_front();
// display(list1);
// list1.remove(78);
// display(list1); 

//sorting a list
// list1.sort();
// display(list1);

//reversing the list
list1.reverse();
display(list1);


// list<int> :: iterator iter;
// iter=list1.begin();
// cout<< *iter<<endl;
// iter++;
// cout<< *iter<<endl;


// list<int> :: iterator iter1;
// iter1=list2.begin();

// *iter=1;
// iter++;
// *iter=2;
// iter++;
// *iter=3;
// iter++;
// *iter=4;
// iter++;
// display(list2);

list<int> list2(3);  //empty list of length 3
    list<int> :: iterator it = list2.begin();
    *it=45;
    it++;
    *it=6;
    it++;
    *it=9;
    it++;
 
    display(list2);

//merging two lists
// list1.merge(list2);
// cout<<"After merging "<<endl;
// display(list1);


return 0;
}  