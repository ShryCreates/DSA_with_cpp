//pre and post increment and decrement using pointer arithmetic
#include<iostream>
using  namespace std;
int main(){
    int x=10;
    int *ptr=&x;
    cout<<ptr<<endl;
    cout<<(ptr+1)<<endl;
    cout<<(ptr+=1)<<endl;
    cout<<(ptr++)<<endl;
    cout<<(++ptr)<<endl;
    cout<<(ptr-1)<<endl;
    cout<<(ptr-=1)<<endl;
    cout<<(ptr--)<<endl;
    cout<<(--ptr)<<endl;
    return 0;
}
