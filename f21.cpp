#include<iostream>
using namespace std;
int main(){
    int x=9;
    int &y=x;
    cout<<x<<" "<<y<<endl;
    y=8;
    cout<<x<<" "<<y<<endl;
    return 0;
}
