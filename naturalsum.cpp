#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the last no.:";
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum="<<sum<<endl;
    return 0;
}
