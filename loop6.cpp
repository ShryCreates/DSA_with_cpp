// C++ program to print first multiple of 5 which is also a multiple of 7 within 100 using for loop.
#include<iostream>
using namespace std;
int main(){
    for(int i=5;i<=100;i+=5){
        if(i%7==0){
            cout<<i<<endl;
            i+=5;
        }
    }
    return 0;
}
