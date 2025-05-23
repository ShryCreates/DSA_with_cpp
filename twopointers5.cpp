//merging two arrays into a single array
#include<iostream>
using namespace std;
int main(){
    int arr1[]={0,2};
    int m=2;
    int arr2[]={1,6,7,8};
    int n=4;
    int result[m+n];
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            result[k]=arr1[i];
            i++;
            k++;
        }
        else{
            result[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<m){
        result[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n){
        result[k]=arr2[j];
        j++;
        k++;
    }
    for(int i=0;i<(m+n);i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
