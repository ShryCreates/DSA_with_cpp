//using pointer arithmetic in an array
#include<iostream>
using namespace std;
int main(){
    int arr[2]={7,5};
    int *ptr=&arr[0];
    cout<<*++ptr<<endl; //shifting the index from 0 to 1 (7->5)
    cout<<arr[0]<<" "<<arr[1]<<endl; //printing the array
    return 0;
}
