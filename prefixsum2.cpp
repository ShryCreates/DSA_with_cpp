//check if we can partition the array into subarrays with equal sum     
#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>&v){
    int total_sum=0;
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
    }
    if(total_sum%2!=0){
        return false;
    }
    int prefix_sum=0;
    for(int i=0;i<v.size();i++){
        prefix_sum+=v[i];
        int suffix_sum=total_sum-prefix_sum; //prefix sum + suffix sum = total sum
        if(prefix_sum==suffix_sum){
            return true;
        }
    }
    return false;
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
    check(v);
    if(check(v)){
        cout<<"Array can be partitioned into two subarrays."<<endl;
    }
    else{
        cout<<"Array can not be partitioned into two subarrays."<<endl;
    }
    return 0;
}
