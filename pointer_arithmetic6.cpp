//using pointer arithmetic in an array
#include<iostream>
using namespace std;
int main(){
    int arr[2]={4,7};
    int *ptr=&arr[0];
    cout<<++*ptr<<endl; //pointing to 0th index and then increasing the value by 1.
    cout<<arr[0]<<" "<<arr[1]<<endl; //printing the updated values in the array.
    return 0;
}
