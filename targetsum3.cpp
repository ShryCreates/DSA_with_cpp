#include<iostream>
using namespace std;
int main(){
    int arr[]={-1,0,1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target_sum=2;
    int pairs=0;
     for(int i=0;i<size;i++){
        for(int j=(i+1);j<size;j++){
            if(arr[i]+arr[j]==target_sum){
                pairs++;
            }
        }
    }
    cout<<"Yes:"<<pairs<<endl;
    return 0;
}
