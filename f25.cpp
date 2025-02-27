#include<iostream>
using namespace std;
void twice(int &a,int &b,int &c){
    a*=2;
    b*=2;
    c*=2;
}
int main(){
    int x=2,y=5,z=7;
    twice(x,y,z);
    cout<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}
