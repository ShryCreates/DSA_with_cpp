//sorted array
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    bool sorted=true;
    for(int i=1;i<size;i++){
        if(arr[i]<=arr[i-1]){
            sorted=false;
        }
    }
    cout<<sorted<<endl;
    return 0;
} 
