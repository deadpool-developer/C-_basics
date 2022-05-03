/* Basic control structure in C++ are:
    1.Sequence Structure
    2.Selection Structure
    3.Loop Structure

1. SEQUENCE STRUCTURE
    Entry -> Action1 -> Action2 -> Exit

2.SELCTION STRUCTURE
    Entry -> Condition -> True/False -> A1 / A2 -> Exit

3. LOOP STRUCTURE
    Entry -> Condition -> True -> False ->Exit
                   ^________|

*/
#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me your age: "<<endl;
    cin>>age;
    if(age<18){
        cout<<"You are not allowed"<<endl;
    }
    else if(age==18){
        cout<<"you will get the kid pass"<<endl;
    }
    else{
        cout<<"You are allowed";
    }
    return 0;
}