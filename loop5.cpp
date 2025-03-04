#include<iostream>
using namespace std;
int main(){
    int i=5;
    while(i<=100){
        if(i%7==0){
            cout<<i<<endl;
        }
        i+=5;
    }
    return 0;
}
