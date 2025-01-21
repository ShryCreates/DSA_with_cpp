#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    cout<<"Size of array is "<<sizeof(arr)<<endl;
    cout<<"Length of array is "<<sizeof(arr)/sizeof(arr[0])<<endl;
    return 0;
}
