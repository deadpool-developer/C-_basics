#include<iostream>
using namespace std;

int main(){
    //REFERENCE VARIABLES IN C++

    /*
    We generally call same person with different names but all those names refer
    to the same personn only.
    Similarly, the refernce variable is the another name of the variable which exist and contain similar value.

    EG -> Rohan Das ---> Monty ----> Rohu ----> Dangerous Coder
    */

   float x = 435;
   float &y = x;
   cout<<"The value of x is: "<<x<<endl;  //435
   cout<<"The value of y is: "<<y<<endl;  //435
    return 0;
}