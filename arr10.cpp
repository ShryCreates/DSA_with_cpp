//difference 
#include<iostream>
using namespace std;
int main(){
    int arr[6];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<size;i++){
        if(i%2==0){
            ans+=arr[i];
        }
        else{
            ans-=arr[i];
        }
    }
    cout<<ans;
    return 0;
}
