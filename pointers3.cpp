//Accessing data through a pointer.
//Dereference operator(*)
#include<iostream>
using namespace std;
int main(){
    int x=18;
    float y=9.8;
    int *ptr1=&x;
    cout<<"Address stored inside ptr1 :"<<ptr1<<endl;
    cout<<"Value present at the address stored in the ptr1:"<<*ptr1<<endl;  //dereference
    float *ptr2=&y;
    cout<<"Address stored inside ptr2 :"<<ptr2<<endl;
    cout<<"Value present at the address stored in the ptr2:"<<*ptr2<<endl;
    *ptr1=50; //updating the value stored in ptr1.
    cout<<"ptr1 still pointing to same memory which has 50 instead of 18-"<<*ptr1<<endl;
    return 0;
}
