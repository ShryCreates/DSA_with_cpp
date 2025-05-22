//merging two arrays into a single array
#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,2,3};
    int m=3;
    int arr2[]={4,5,6};
    int n=3;
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
