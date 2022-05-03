/*
    do{
        C++ statement;
    }while(condition)
*/
#include<iostream>
using namespace std;

int main(){
    int i = 1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while (i<=40);
    do{
        cout<<"6 * "<<i<<" = " <<i*6<<endl;
        i++;
    }while (i<=10);
    
    return 0;
}


