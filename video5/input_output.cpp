//C++ comes with libraries which helps us in performing input/output. In C++ sequence of bytes corresponding to input and output are commonly known as streams
//INPUT STREAMS: Direction of flow of bytes takes place from input device(eg. Keyboard) to the main memory
//OUTPUT STREAMS: Direction of flows of bytes takes place from main memory to the output device(eg. Display)

#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter the value of Num1: "; // '<<' is called Insertion operator
    cin>>num1;  // '>>' is called Extraction Operator

    cout<<"Enter the value of Num2: ";
    cin>>num2;

    cout<<"The sum of num1 and num2 is: "<<num1+num2;
    return 0;
}
