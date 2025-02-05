#include<iostream>
using namespace std;
void changevalue(int &x,int &y){
    x=99;
    y=100;
}
int main(){
    int a=5,b=6;
    changevalue(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
