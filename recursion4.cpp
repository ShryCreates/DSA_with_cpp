// Print all the elements of the array recursively
#include<iostream>
using namespace std;
void f(int *arr, int idx, int n){
    // Base case
    if(idx==n)
    return;
    // Self work
    cout<<arr[idx]<<endl;
    //Assumption
    return f(arr,idx+1,n);
}
int main(){
    int n=5;
    int arr[]={6,1,9,3,2};
    f(arr,0,n);
    return 0;
}
