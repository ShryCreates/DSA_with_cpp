#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    //for loop
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    //for each loop
    for(int ele:arr){
        cout<<ele<<endl;
    }
    //while loop
    int i=0;
    while(i<size){
        cout<<arr[i]<<endl;
        i++;
    } 
    return 0;
}
