//Dangling pointer
#include<iostream>
using namespace std;
int main(){
    int *ptr=NULL;
    {
        int x=20;
        int *ptr=&x;
    }
    cout<<ptr<<" "<<*ptr;
    return 0;
}
