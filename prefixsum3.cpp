//print sum of values in a given range of indices(1 based indexing) from l to r(both included)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;
    vector<int>v(n+1,0);
    for(int i=0;i<=n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    //calculate prefix sum array
    for(int i=0;i<=n;i++){
        v[i]+=v[i-1];
    }
    int q;
    cout<<"Enter the query:";
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int ans=0;
        ans=v[r]-v[l-1];
        cout<<ans<<endl;
    }
    return 0;
} 
