#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a no.:";
    cin>>x;
    if(x>0){
        cout<<x;
    }
    else{
        cout<<"Entered value is negative so it is skipped.";
    }
    return 0;
}
