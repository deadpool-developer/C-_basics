#include<iostream>
using namespace std;

int c = 45;
int main(){
    int a,b,c;
    cout<< "Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    c = a+b; 
    cout<<"The sum is: "<<c<<endl;
    //SCOPE RESOLUTION OPERATOR
    cout<<"The global C is: "<<::c;
    //Scope Resolution operator :: helps in accessing the global value of the variable
    
}