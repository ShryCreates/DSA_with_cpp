#include<iostream>
using namespace std;
inline int cube(int x){
    return x*x*x;
}
int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    cout<<"The cube of square is "<<cube(num)<<endl;
    return 0;
}
