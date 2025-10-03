/*Given an array of integers. Print sum of all subsets in it. Output sum can be printed in any order.
Input1: arr[]={2,3}
Output1: 0 2 3 5  [{null},{2},{3},{2+3}]
Input2: arr[]={2,4,5}
Output2: 0 2 4 5 6 7 9 11  
*/
#include<iostream>
#include<vector>
using namespace std;
void f(int *arr,int n,int i,int sum,vector<int>&result){
    //base case
    if(i==n){
        result.push_back(sum);
        return;
    }
    f(arr,n,i+1,sum+arr[i],result); //pick ith element
    f(arr,n,i+1,sum,result); //not pick ith element
}
int main(){
    int arr[]={2,4,5};
    int n=3;
    vector<int>result;
    f(arr,n,0,0,result);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
