#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the digit:";
    cin>>n;
    int digit=0;
    while(n>0){
        digit++;
        n/=10;
    }
    cout<<digit<<endl;
    return 0;
}
