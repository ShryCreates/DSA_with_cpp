//Find the sum of two integers using pointers.
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter value of x:";
    cin>>x;
    cout<<"Enter value of y:";
    cin>>y;
    int *ptr1=&x;
    int *ptr2=&y;
    int result;
    int *ptr_result=&result;
    *ptr_result=*ptr1+*ptr2;
    cout<<result<<" "<<*ptr_result<<endl;
    return 0;
}
