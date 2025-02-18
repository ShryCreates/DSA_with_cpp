#include<iostream>
using namespace std;
bool odd(int x){
    if(x%2==0){
        return false;
    }
    else{
        return true;
    }
}
int main(){
    int a=1;
    int b=10;
    for(int i=a;i<=b;i++){
        if(odd(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}
