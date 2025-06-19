#include<iostream>
using namespace std;
int f(int p,int q){
    if(q==0){
        return 1;
    }
    else if(q%2==0){
        int res=f(p,q/2);
        return res*res;
    }
    else{
        int res=f(p,(q-1)/2);
        return p*res*res;
    }
}
int main(){
    int result=f(2,3);
    cout<<result;
    return 0;
}
