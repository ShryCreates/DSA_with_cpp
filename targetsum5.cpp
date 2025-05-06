#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int n=4;
    int x=9; //target sum
    int i=0,j=n-1;
    bool found=false;
    while(i<j){
        if(arr[i]+arr[j]==x){
            found=true;
            break;
        }
        else if(arr[i]+arr[j]<x){
            i++;
        }
        else{
            j--;
        }
    }
    if(found==true){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
