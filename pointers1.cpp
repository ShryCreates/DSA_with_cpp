#include<iostream>
using namespace std;
int main(){
    int num=10;
    int*ptr=&num;
    cout<<"Value of the num:"<<num<<endl;
    cout<<"Address of num:"<<&num<<endl;
    cout<<"Value pointed to by ptr:"<<*ptr<<endl;
    cout<<"Address stored in ptr:"<<ptr<<endl;
    return 0;
}
