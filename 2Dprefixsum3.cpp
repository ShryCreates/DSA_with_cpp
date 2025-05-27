//prefix sum over row and col both
#include<iostream>
#include<vector>
using namespace std;
int Sum (vector<vector<int>>&matrix,int l1,int r1,int l2,int r2){
    int sum=0;
    //prefix sum row wise
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            matrix[i][j]+=matrix[i][j-1];
        }
    }
    //prefix sum col wise
    for(int i=1;i<=matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            matrix[i][j]+=matrix[i-1][j];
        }
    }
    //printing prefix sum 2D array
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl; 
    } 
    int top=0,left=0,topleft=0;
    if(l1!=0){
        top=matrix[l1-1][r2];
    }
    else if(r1!=0){
        left=matrix[l2][r1-1];
    }
    else if(l1!=0 && r1!=0){
        topleft= matrix[l1-1][r1-1];
    }
    sum=matrix[l2][r2]-top-left+topleft;
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
    cout<<"Sum:"<<sum;
    return 0;
}
