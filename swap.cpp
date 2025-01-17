#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter value for a:";
    cin>>a;
    cout<<"Enter value for b:";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"Swapped value for a:"<<a<<endl;
    cout<<"Swapped value for b:"<<b<<endl;
    return 0;
}
