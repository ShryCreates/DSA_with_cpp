//row with the max no. of 1s
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int max(vector<vector<int>>&v){
int max_ones=INT_MIN;
int max_ones_row=-1;
int col=v[0].size();
for(int i=0;i<v.size();i++){
    for(int j=0;j<v[i].size();j++){
        if(v[i][j]==1){
            int no_of_ones=col-j;
            if(no_of_ones>max_ones){
            max_ones=no_of_ones;
            max_ones_row=i;
        }
        break;
      }
    }
  }
  return max_ones_row;
}
int main(){
    int n,m;
    cout<<"Enter the size of row:";
    cin>>n;
    cout<<"Enter the size of column:";
    cin>>m;
    vector<vector<int>>vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    int res=max(vec);
    cout<<"Row with the max no. of 1 is "<<res<<endl;
    return 0;
}
