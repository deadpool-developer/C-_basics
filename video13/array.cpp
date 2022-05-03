#include<iostream>
using namespace std;

int main(){
    int marks[] = {90,95,88,92,72};
    //To find the length of the array:
    // sizeof(marks)/sizeof(marks[0])
    // *(&marks+1) - marks
    int arr_size = *(&marks+1)-marks;
    for(int i=0;i<sizeof(marks)/sizeof(marks[0]);i++){
        cout<<marks[i]<<endl;
    }
    cout<<"The another way of checking the size of the array is: "<<endl;
    for(int i=0;i<arr_size;i++){
        cout<<marks[i]<<endl;
    }
    cout<<"Using while loop:" <<endl;
    int j = 0;
    while(j < arr_size){
        cout<<marks[j]<<endl;
        j++;
    }

    cout<<"Using do-while loop: "<<endl;
    int t= 0;
    do
    {
        /* code */
        cout<<marks[t]<<endl;
        t++;
    } while (t<arr_size);
    
    return 0;
}