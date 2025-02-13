#include<iostream>
using namespace std;
int add(int x,int y);  //prototype
int main(){            //use
    int p=add(4,9);
    cout<<p<<endl;
    return 0;
}
int add(int x,int y){  //definition
    return x+y;
}
