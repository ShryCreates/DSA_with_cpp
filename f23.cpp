#include<iostream>
using namespace std;
void fun(int*x){
    cout<<*x<<endl;
}
int main(){
    int x=9;
    fun(&x);
    return 0;
}
