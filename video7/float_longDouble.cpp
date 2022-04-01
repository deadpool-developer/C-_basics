#include<iostream>
using namespace std;

int main(){
    float a = 12.3;
    long double b = 12.3;
    //In C++ if you ask the compiler what is 12.3 means to the compiler,
    //Compiler will answer it as double.
    //So to make the compiler know the value is float or double we use some keyword to signify it.
    //For float use 'f'
    //For Lomg double use 'l'
    float c = 23.4f;
    long double d = 23.4l;
    //TO CHECK THE TYPE OF THE VARIBALE
    cout<<typeid(c).name()<<endl<<typeid(d).name()<<endl;
    cout<<"The value of a is: "<<a<<endl<<"The value of b is: "<<b<<endl;

    //TO CHECK THE SIZE OF THE VARIABLE
    cout<<"THe size of 23.4 is: "<<sizeof(23.4)<<endl;
    cout<<"THe size of 23.4f is: "<<sizeof(23.4f)<<endl;
    cout<<"THe size of 23.4F is: "<<sizeof(23.4F)<<endl;
    cout<<"THe size of 23.4l is: "<<sizeof(23.4l)<<endl;
    cout<<"THe size of 23.4L is: "<<sizeof(23.4L)<<endl;

}