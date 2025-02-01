#include<iostream>
using namespace std;
int p=5;
void print(){
    cout<<p;
}
int main(){
    int p=7;
    cout<<p<<endl;
    p++;
    cout<<p<<endl;
    print();
    return 0;
}
