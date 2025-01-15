#include<iostream>
using namespace std;
int main(){
    int n,first,second,third,fourth,fifth,sum;
    n=12345;
    first=n/10000;
    n=n%10000;
    second=n/1000;
    n=n%1000;
    third=n/100;
    n=n%100;
    fourth=n/10;
    fifth=n%10;
    sum=first+fourth;
    cout<<"Sum of 1st and last 2nd digit is "<<sum;
    return 0;
}
