//array rotation using vector and algo
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    int k=2;
    k=k%v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int a:v){
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}
