#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the no.:";
    cin>>x;
    if((x%2==0)&&(x%3==0)){
        cout<<x;
    }
    else{
        cout<<"Invalid no.";
    }
    return 0;
}
