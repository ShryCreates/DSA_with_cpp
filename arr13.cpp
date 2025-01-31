//array rotation
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    k=k%size;  //k can be greater than n
    int newarr[5];
    int j=0;
    //inserting last k elements
    for(int i=size-k;i<size;i++){
        newarr[j++]=arr[i];
    }
    //inserting remaining elememts
    for(int i=0;i<=k;i++){
        newarr[j++]=arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<newarr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
