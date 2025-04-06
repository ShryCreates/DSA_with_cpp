// row with max no. of 1s 
//2nd method
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int max(vector<vector<int>>&v){
    int left_most_ones=-1;
    int max_ones_row=-1;
    int j=v[0].size()-1;
    //finding left most 1s in 0th row
    while(j>=0 && v[0][j]==1){
        left_most_ones=j;
        max_ones_row=0;
        j--;
    }
    //check in rest of the row if we can find a 1 left to the 0
    for(int i=1;i<v.size();i++){
        while(j>0 && v[i][j]==1){
            left_most_ones=j;
            j--;
            max_ones_row=i; 
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
