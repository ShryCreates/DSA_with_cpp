// Print max value of the array
#include<iostream>
using namespace std;
int f(int *arr, int idx, int n){
    // Base case
    if(idx==n-1){
        return arr[idx]; // Self work
    }
    //Assumption
    return max(arr[idx],f(arr,idx+1,n));
}
int main(){
    int n=5;
    int arr[]={3,10,3,2,15};
    cout<<f(arr,0,n);
    return 0;
}
