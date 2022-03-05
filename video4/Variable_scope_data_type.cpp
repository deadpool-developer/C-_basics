//Variable is the container that holds the data.

//Varianle can of be of various types:
    //1. Int -> 34
    //2. Float -> 3.3 (decimal numbers of low precision)
    //3. Char -> 'p'
    //4. Double -> Precision is more than the float (decimal numbers of high precision)
    //5. Boolean  -> Ture / False

//int sum = 34; -> means sum is an  integer which holds value 32 in memory.

//Syntax: Data_type variable_name = Value;

//Scope can be classified into two types: -> kidhr variable uplabd krvane hai
    //1. Local Variables -> local scope
    //2. Global Variables -> avaiable globally

//What is scope?
    //Scope of  a variable is the region in code where the existence of variable is valid.
    
//LOCAL VARIABLES: Local variables are declared inside the braces of any function and can be accessed only from there.

//GLOBAL VARIABLES: Global variables are declared outside any function and can be accessed from anywhere.

//Can global and local variable have same name in C++?
    //Yes, 

//DATA TYPES IN C++
    //three groups:
        //Built-in -> int, float, char, double, bool
        //User-defined -> Struct, Union, Enum
        //Derived ->  Array, Function, Pointer

#include<iostream>
using namespace std;

int main(){
    /*int a = 4;
    int b = 5;*/
    int a = 14, b = 15;  //single line declaration
    float c = 3.14;
    char d = 'A'; //only one character
    cout<<"The value of a is: "<<a;
    cout<<"\nThe value of b is: "<<b;
    cout<<"\nThe value of pi is: "<<c;
    cout<<"\nThe value of char is: "<<d;
    return 0;
}
