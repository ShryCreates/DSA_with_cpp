#include<iostream>
using namespace std;
int add(int x,int y=9){
    int result=x+y;
    return result;
}
int main(){
    add(5);
    cout<<add(5)<<endl;
    return 0;
} 
