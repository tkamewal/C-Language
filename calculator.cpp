#include<iostream>
#include <cmath>
using namespace std;
class simpleCalculator{
    int a,b;
public:
void utility(void){
    
    cout<<"Enter the value of 1st number"<<endl;
    cin>>a;
    cout<<"Enter the value of 2nd number"<<endl;
    cin>>b;
}
void calculation(void){
    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
}
};
class scientificCalculator{
    int a,b;
    public:
 void utility1(void){
    
    cout<<"Enter the value of 1st number"<<endl;
    cin>>a;
    cout<<"Enter the value of 2nd number"<<endl;
    cin>>b;
}
void calculation1(void){
    cout<<"The value of cos(a) is: "<<cos(a)<< " and the value of cos(b) is "<<cos(b)<<endl;
    cout<<"The value of sin(a) is: "<<sin(a)<< " and the value of sin(b) is "<<sin(b)<<endl;
    cout<<"The value of exp(a) is: "<<exp(a)<< " and the value of exp(b) is "<<exp(b)<<endl;
    cout<<"The value of tan(a) is: "<<tan(a)<< " and the value of tan(b) is "<<tan(b)<<endl;
    
}
};
class hybridCalculator: public simpleCalculator,public scientificCalculator{
 
};

int main(){
// simpleCalculator sc;
// sc.utility();
// sc.calculation();
// scientificCalculator st;
// st.utility1();
// st.calculation1 ();
hybridCalculator calc;
 calc.utility();
 calc.calculation();
calc.utility1();
 calc.calculation1 ();
return 0;
}  