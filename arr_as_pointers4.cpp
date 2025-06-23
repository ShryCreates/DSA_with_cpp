//storing the whole array at once using pointers
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int (*ptr)[5]=&arr;
    cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<endl;
    return 0;
}
