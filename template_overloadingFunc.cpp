#include<iostream>
using namespace std;

void func(int a){
    cout<<"this is First function "<<a<<endl;
}
template <class T>
void func(T a){
    cout<<"this is templatised function "<<a<<endl;
}

int main(){
func(5); //Exact match takes the first priority
return 0;
}  