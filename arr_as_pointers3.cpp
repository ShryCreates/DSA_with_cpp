// Array as pointers using post increment and decrement
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=(arr+2);
    cout<<*ptr<<endl;
    cout<<*ptr++<<endl;
    cout<<*ptr--<<endl;
    return 0;
} 
