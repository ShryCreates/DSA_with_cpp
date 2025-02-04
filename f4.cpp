#include<iostream>
using namespace std;
int main(){
    int p=5;
    int &q=p;
    cout<<q<<endl;
    q++;
    cout<<q<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<&q<<endl;
    return 0;
}
