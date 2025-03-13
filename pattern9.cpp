#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the row no.:";
    cin>>n;
    cout<<"Enter the column no.:";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1||i==n){
                cout<<j;
            }
            else if(j==1||j==6){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
