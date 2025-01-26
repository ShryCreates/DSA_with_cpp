//linear search
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,9,18,11,7};
    int key=11;
    int ans=-1;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            ans=arr[i];
            break;
        }
    }
    cout<<ans;
    return 0;
}
