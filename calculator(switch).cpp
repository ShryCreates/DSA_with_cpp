#include<iostream>
using namespace std;
int main(){
    char op;
    float x,y;
    cout<<"Enter the operator(+,-,*,/):";
    cin>>op;
    cout<<"Enter the two values:";
    cin>>x>>y;
    switch(op){
        case '+':
        cout<<x<<"+"<<y<<"="<<x+y<<endl;
        break;
        case '-':
        cout<<x<<"-"<<y<<"="<<x-y<<endl;
        break;
        case '*':
        cout<<x<<"*"<<y<<"="<<x*y<<endl;
        break;
        case '/':
        cout<<x<<"/"<<y<<"="<<x/y<<endl;
        break;
        default:
        cout<<"Invalid operator.";
        break;
    }
    return 0;
}
