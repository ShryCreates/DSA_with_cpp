//check if their exists any pairs in the array whose abs diff is exactly x
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,10,15,20,26};
    int n=5;
    int x=10;
    int i=0,j=1;
    bool found=false;
    while(i<n && j<n){
        if(abs(arr[i]-arr[j])==x){
            found=true;
            break;
        }
        else if(abs(arr[i]-arr[j])<x){
            j++;
        }
        else{
            i++;
        }
    }
    if(found==true){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
