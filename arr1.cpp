#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Array elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
