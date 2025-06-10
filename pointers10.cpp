//Void pointer
#include<iostream>
using namespace std;
int main(){
    float x=10.9;
    int y=10;
    void *ptr=&x;
    ptr=&y;
    cout<<ptr<<endl;
    int *p1=(int *)ptr; //type casting
    cout<<*p1<<endl;
    float *p2=(float *)ptr;
    cout<<*p2<<endl;
    return 0;
}
