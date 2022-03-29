#include<iostream>
using namespace std;

int glo = 6;  //Global variable

void sum(){
    int a;
    cout<<glo;
}
int main(){

    sum();  //Function call
    bool is_true = true; //prints 1 in case if True and 0 for False
    int glo = 9;  //Yes , we can declare global and local variable with the same name
    glo = 78;  //updates the local variable
    cout<<"\nThe value of glo is: "<<glo <<is_true; //This will print 78
    return 0;
}

//The precedence will of local variable if the name of both the variable is same i.e global and local variable
