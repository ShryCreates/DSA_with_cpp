#include<iostream>
using namespace std;
void temp(int p){
    int q=p;
    q=q-1;
}
int main(){
    int p=890;
    temp (p);
    cout<<p<<endl;
    return 0;
}
