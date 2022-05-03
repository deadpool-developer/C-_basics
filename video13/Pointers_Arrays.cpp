#include<iostream>
using namespace std;

int main(){
    /*
    POINTER ARITHMETIC FORMULAE:
        address new = address current + i * sizeof(datatype)
        example:
            address cuurent = 32
            i = 1
            sizeof(datatype) --> int  = 4

            address new = 32+1*4 --> 36
    */
   int arr[] = {6,7,8,9,10,11,12,13,14};
   int* r = arr;
   cout<<*(r++)<<endl;
   cout<<*(++r)<<endl;


   int marks[] = {1,2,3,4,5};
   int* p = marks; //points at the address of the marks array
   cout<<"The value of marks[0] is: "<<*p<<endl; //derefrencing the array values
   cout<<"The value of marks[1] is: "<<*p+1<<endl;
   cout<<"The value of marks[2] is: "<<*p+2<<endl;
   cout<<"The value of marks[3] is: "<<*p+3<<endl;
    return 0;
}