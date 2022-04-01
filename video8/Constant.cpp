#include<iostream>
using namespace std;

int main(){
    int a = 45;
    cout<<"The value of a was: " << a<<endl;
    a = 55;
    cout<<"The value of a is: " << a<<endl;
    return 0;

    //The value of 'a' gets changed

    //CONSTANT IN C++
    //To avoid this changing in the value of the variable we use const keyword which helps in not changing the value accidently

    const int c = 23;
    cout<<"The value of c was: "<<c<<endl;
    c = 21;
    cout<<"The value of c is: "<<c<<endl;
    //error: assignment of read-only variable 'c'
}