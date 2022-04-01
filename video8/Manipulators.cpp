#include<iostream>
#include<iomanip>
using namespace std;

int main(){

//Manipulators helps in code formating -> endl, setw(helps in specifying the width of the field)
    int a = 3, b = 78, c = 123334;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;

    cout<<"The value of a with setw is:"<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is:"<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is:"<<setw(4)<<c<<endl;

    /*
    The value of a is: 3
    The value of b is: 78
    The value of c is: 123334
    The value of a with setw is:   3  
    The value of b with setw is:  78  
    The value of c with setw is:123334
    */

   //OPERATOR PRECEDENCE

    int x = 3, y = 5;
    int z = ((((a*5)+b)-45)+87);
    cout<<z;
    return 0;
}