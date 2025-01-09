#include <iostream>
using namespace std;
int main(){
    int r,c,a[100][100],b[100][100],sum[100][100],sub[100][100],mul[100][100],trans[100][100],i,j;
    cout<<"enter no of rows:";
    cin>>r;
    cout<<"enter no of col:";
    cin>>c;
    cout<<"enter elements of 1st matrix:"<<endl;
    for(i=0;i<r;++i)
    for(j=0;j<c;++j){
        cout<<"enter element a"<<i+1<<j+1<<":";
        cin>>a[i][j];
    }
    cout<<"enter elements of 2nd matrix:"<<endl;
    for(i=0;i<r;++i)
    for(j=0;j<c;++j){
        cout<<"enter element b"<<i+1<<j+1<<":";
        cin>>b[i][j];
    }
    for(i=0;i<r;++i)
    for(j=0;j<c;++j){
    sum[i][j]=a[i][j]+b[i][j];
    sub[i][j]=a[i][j]-b[i][j];
    mul[i][j]=a[i][j]*b[i][j];
    trans[i][j]=a[j][i];
    }
    //displaying 
    cout<<"sum:"<<endl;
    for(i=0;i<r;++i)
    for(j=0;j<c;++j){
        cout<<sum[i][j]<<" ";
        if(j==c-1)
        cout<<endl;
    }
    cout<<"sub:"<<endl;
    for(i=0;i<r;++i)
    for(j=0;j<c;++j){
        cout<<sub[i][j]<<" ";
        if(j==c-1)
        cout<<endl;
    }
    cout<<"mul:"<<endl;
    for(i=0;i<r;++i)
    for(j=0;j<c;++j){
        cout<<mul[i][j]<<" ";
        if(j==c-1)
        cout<<endl;
    }
    cout<<"transpose:"<<endl;
    for(i=0;i<r;++i)
    for(j=0;j<c;++j){
        cout<<trans[i][j]<<" ";
        if(j==c-1)
        cout<<endl;
    }
    return 0;
}
