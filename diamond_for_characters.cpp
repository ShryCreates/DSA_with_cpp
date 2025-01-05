#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row no.:";
    cin>>n;
    //for upper triangle
    for(int i=1;i<=n;i++){
        for(int k=0;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=0;j<(2*i-1);j++){
            cout<<(char)('A'+j);
        }
        cout<<endl;
    }
    //for lower triangle
    for(int i=n+1;i<=(2*n-1);i++){
        for(int k=0;k<=i-n;k++){
            cout<<" ";
        }
        for(int j=0;j<2*(2*n-i)-1;j++){
            cout<<(char)('A'+j);
        }
        cout<<endl;
    }
    return 0;
}
