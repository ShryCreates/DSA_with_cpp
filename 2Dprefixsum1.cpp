//brute force(sum of the rectangle from (l1,r1) to (l2,r2))
#include<iostream>
#include<vector>
using namespace std;
int Sum(vector<vector<int>>&matrix,int l1,int r1,int l2,int r2){
    int sum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=matrix[i][j];
        }
    }
    return sum;
} 
int main(){
    int n,m;
    cout<<"Enter the size of row:";
    cin>>n;
    cout<<"Enter the size of column:";
    cin>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    int l1,r1,l2,r2;
    cout<<"l1:";
    cin>>l1;
    cout<<"r1:";
    cin>>r1;
    cout<<"l2:";
    cin>>l2;
    cout<<"r2:";
    cin>>r2;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=Sum(matrix,l1,r1,l2,r2);
    cout<<sum;
    return 0;
}
