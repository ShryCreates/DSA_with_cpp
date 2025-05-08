//find no. of unique pairs whose abs sum is x
#include<iostream>
using namespace std;
int main(){
    int arr[]={-2,-1,0,1,3,4,6,8,11,12};
    int n=10;
    int x=12;
    int i=0,j=n-1;
    int ans=0;
    while(i<j){
        if(arr[i]+arr[j]==x){
            ans++;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<x){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<ans;
    return 0;
} 
