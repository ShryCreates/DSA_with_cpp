/* Given a no. and a value k. Print k multiples of num.
Constraints: k>0
Input 1: num=12,k=5
Output 1: 12,24,36,48,60
Input 2: num=3,k=8
Output 2: 3,6,9,12,15,18,21,24 */
#include<iostream>
using namespace std;
void f(int num, int k){
    //Base case
    if(k==0) return;
    //Assumption
    f(num,k-1); // The function correctly prints the 1st k-1 multiples.
    //Self work
    cout<<(num*k)<<" ";
}
int main(){
    f(12,5);
    return 0;
}
