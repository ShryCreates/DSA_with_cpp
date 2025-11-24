/*11 8 15 9 4
->4 8 9 11 15
*/
#include<iostream>
#include<vector>
using namespace std;
void InsertionSort(vector <int>&v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int current_ele=v[i];
        //find correct position for current ele
        int j=i-1;
        while(j>=0 && v[j]>current_ele){
            v[j+1]=v[j];
            j--;
        }
        //insert current ele
        v[j+1]=current_ele;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    InsertionSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
