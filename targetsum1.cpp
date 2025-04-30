#include<iostream>
using namespace std;
int main(){
    int arr[]={6,3,4,7,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int targetsum=6;
    int pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==targetsum){
                pairs++;
            }
        }
    }
    cout<<pairs<<endl;
    return 0;
}
