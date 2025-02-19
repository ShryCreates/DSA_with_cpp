#include<iostream>
using namespace std;
bool prime(int x){
    for(int i=2;i<=(x-1);i++){
        if(x%i==0){
            return false;
        }
        else{
            return true;
        }
    }
} 
int main(){
    int a=2;
    int b=10;
    for(int i=a;i<=b;i++){
        if(prime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}
