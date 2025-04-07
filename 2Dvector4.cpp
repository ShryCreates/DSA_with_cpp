//rotation of matrix at 90 degrees
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<vector<int>>&vec){
    int n=vec.size();
    //transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(vec[i][j],vec[j][i]);
        }
    }
    //reverse every row
    for(int i=0;i<n;i++){
        reverse(vec[i].begin(),vec[i].end());
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the size of matrix:";
    cin>>n;
    vector<vector<int>>vec(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>vec[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    rotate(vec);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
