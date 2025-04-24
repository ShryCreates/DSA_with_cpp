#include<iostream>
#include<vector>
using namespace std;
void sum(vector<int>&v){
    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sum(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
