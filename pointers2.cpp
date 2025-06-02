#include<iostream>
using namespace std;
int main(){
    int x=10;
    float y=18.9;
    cout<<&x<<" "<<&y<<endl;
    // create a pointer that can store address of x and y.
    int *ptr1;
    cout<<ptr1<<endl;
    float *ptr2;
    cout<<ptr2<<endl;
    int *z; //declaring ptr
    cout<<z<<endl; //it will provide garbage value
    int marks=90;
    z=&marks;
    cout<<z<<endl; //it will provide the actual address
    return 0;
}
