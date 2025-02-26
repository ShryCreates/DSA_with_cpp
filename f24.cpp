#include<iostream>
using namespace std;
int add(int=0,int=0);
int main(){
    int x=5,y=9;
    cout<<add(x,y);
    return 0;
}
int add(int x,int y){
    return x+y;
}
