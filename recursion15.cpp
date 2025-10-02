/*Given an array of n integers & a target value x. Print whether x exists in the array or not.
Constraints:0<n<=10^6, -10^8<=x<=10^8, -10^8<=a[i]<=10^8
Input1:n=8,x=14,array=[4,12,54,14,3,8,6,1]
Output1:Yes
Input2:n=1,x=9,array[2]
Ouput2:No  */
#include<iostream>
using namespace std;
bool f(int *arr, int n, int i, int x){
    //base case
    if(i==n){
        return false; //arr is exhausted
    }
    return (arr[i]==x)||f(arr,n,i+1,x);
}
int main(){
    int arr[]={5,4,1,8,6,-9,8,2,3,5};
    int n=10;
    int x=8;
    bool result=f(arr,n,0,x);
    if(result) cout<<"Yes";
    else cout<<"No"; 
    return 0;
}
