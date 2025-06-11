//pre and post address using pointer arithmetic
#include<iostream>
using namespace std;
int main(){
    int x=10;
    double y=9.9;
    int *ptr1=&x;
    double *ptr2=&y;
    cout<<"Size of x:"<<sizeof(x)<<endl;
    cout<<"Size of y:"<<sizeof(y)<<endl;
    cout<<ptr1<<" "<<(ptr1+1)<<endl;
    cout<<ptr2<<" "<<(ptr2+1)<<endl;
    cout<<ptr1<<" "<<(ptr1-1)<<endl;
    cout<<ptr2<<" "<<(ptr2-1)<<endl;
    return 0;
}
