#include<iostream>
using namespace std;
int main(){
    int arr[]={6,3,4,2,0,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int targetsum=6;
    int triplets=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                 if(arr[i]+arr[j]==targetsum){
                triplets++;
            }
          }
        }
    }
    cout<< triplets<<endl;
    return 0;
}
