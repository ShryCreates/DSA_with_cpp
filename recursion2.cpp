// value of p^q using recursion
#include<iostream>
using namespace std;
int f(int p,int q){
    if(q==0){
        return 1;
    }
    else{
        return p*f(p,q-1);
    }
}
int main(){
    int result=f(2,3);
    cout<<result;
    return 0;
}
