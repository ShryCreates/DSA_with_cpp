/*Given two no. x and y. Find the greatest common divisor of x and y using recursion.
Constraints:0<=x,y<=10^6
Input1:x=4,y=9
Output1:1
Input2:x=12,y=20
Output2:4
*/
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b>a) return gcd(b,a);
    if(b==0) return a; //base case
    return gcd(b,a%b);
}
int main(){
    cout<<gcd(40,48);
    return 0;
}
