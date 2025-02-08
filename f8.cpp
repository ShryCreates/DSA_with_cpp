#include<iostream>
using namespace std;
void twice(int p){
    p=p*2;
}
int main(){
    int p=24;
    twice(p);
    cout<<p;
    return 0;
}
