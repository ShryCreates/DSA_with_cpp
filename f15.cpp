#include<iostream>
using namespace std;
int square(int x){
    return x*x;
}
double area(int r){
    return 3.14*square(r);
}
double circumf(int r){
    return 2*3.14*r;
}
int main(){
    int r=3;
    cout<<"Area of circle="<<area(r)<<endl;
    cout<<"Circumference of circle="<<circumf(r)<<endl;
    return 0;
}
