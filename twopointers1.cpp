//sort arr of 0s and 1s only using two pointers
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<=right_ptr){
        if(v[left_ptr]==1 && v[right_ptr]==0){
            v[left_ptr++]=0;
            v[right_ptr--]=1;
        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==1){
            right_ptr--;
        }
    }
    return;
}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cout<<"Enter the elements of vector:";
        cin>>ele;
        v.push_back(ele);
    }
    sort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
