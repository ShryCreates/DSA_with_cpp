//matrix multiplication
#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cout<<"Enter row:";
    cin>>r1;
    cout<<"Enter column:";
    cin>>c1;
    int A[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    int r2,c2;
    cout<<"Enter row:";
    cin>>r2;
    cout<<"Enter column:";
    cin>>c2;
    int B[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    if(c1!=r2){
        cout<<"Multiplication of matrix is not possible.";
    }
    int C[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value=0;
            for(int k=0;k<r2;k++){
                value+=A[i][k]*B[k][j];
            }
            C[i][j]=value;
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
