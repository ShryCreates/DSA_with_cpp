// using pointer arithmetic in an array
#include<iostream>
using namespace std;
int main(){
    int arr[2]={2,6};
    int *ptr=&arr[0];
    cout<<(*ptr)++<<endl; //incresing the value at 0th index by 1
    cout<<arr[0]<<" "<<arr[1]<<endl; //printing the updated value
    return 0;
}
