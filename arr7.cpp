//max element
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,15,10,11};
    int max=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Max element of array is "<<max<<endl;
    return 0;
}
