//2nd largest no.
#include<iostream>
#include<climits>
using namespace std;
int secondLargestEle(int arr[],int n){
int max= INT_MIN;
int second_max= INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>second_max && arr[i]!=max){
            second_max=arr[i];
        }
    }
    return second_max;
}
int main(){
    int arr[]={2,3,5,7,6,1,7};
    int n=7;
    cout<<secondLargestEle(arr,n)<<endl;
    return 0;
} 
