#include<iostream>
/*
There are two types of header files:
1. System Header files: It comes with the compiler
2. User defined header files: It is written by the programmer
*/

//USER DEFINED HEADER FILES

//This will rpoduce an error if this.h is not present in the current directory
#include "this.h"

using namespace std;
int main(){
    int a=4, b = 5;
    cout<<"Operators in C++"<<endl; // endl is similar to \n -> new line
    //Arithemetic Operators
    cout<<"The value of a + b: "<<a+b<<endl;
    cout<<"The value of a - b: "<<a-b<<endl;
    cout<<"The value of a * b: "<<a*b<<endl;
    cout<<"The value of a / b: "<<a/b<<endl;
    cout<<"The value of a % b: "<<a%b<<endl;
    cout<<"The value of a++: "<<a++<<endl;
    cout<<"The value of a--: "<<a--<<endl;
    cout<<"The value of ++a: "<<++a<<endl;
    cout<<"The value of --a: "<<--a<<endl;
    cout<<endl;

    //Assignment Operators
    /*
    int a =3 , b= 9;
    char d = 'd'
    */

   //Comparison Operators
   cout<<"Following are the types of comparison operator:"<<endl;
   cout<<"The value of a == b is: "<<(a==b)<<endl;
   cout<<"The value of a != b is: "<<(a!=b)<<endl;
   cout<<"The value of a >= b is: "<<(a>=b)<<endl;
   cout<<"The value of a <= b is: "<<(a<=b)<<endl;
   cout<<"The value of a > b is: "<<(a>b)<<endl;
   cout<<"The value of a < b is: "<<(a<b)<<endl;
   cout<<endl;

   //Logical Operators
   cout<<"Following are the types of logical operators:"<<endl;
   cout<<"The value of this logical and operator is: "<<((a==b) && (a<b))<<endl;
   cout<<"The value of this logical or operator is: "<<((a==b) || (a<b))<<endl;
   cout<<"The value of this logical not operator is: "<<(!(a==b))<<endl;
} 