//Array as pointers using function
#include<iostream>
using namespace std;
void process(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<endl;
    }
    *(arr+1)=33; //updating the value at 1th index
}
int main(){
    int arr[3]={1,3,5};
    process(arr,3);
    for(int i=0;i<3;i++){ //printing the array with the updated value 
        cout<<arr[i]<<" ";
    }
    return 0;
}
