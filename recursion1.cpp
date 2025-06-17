//sum of digits using recursion 
#include<iostream>
using namespace std;
int f(int n){        //123
    if(n>=0 && n<=9){
        return n;
    }
    else{
        return f(n/10)+(n%10);  //f(12)+3
    }
}
int main(){
    int result=f(123);
    cout<<result;
    return 0;
}
