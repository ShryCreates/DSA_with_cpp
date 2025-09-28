/* Given a no. n. Find the sum of natural no. till n but with alternate signs. That means if n=5 then you have to return 1-2+3-4+5=3 as your ans.
Constraints: 0=<n<=10^6
Input 1: n=10
Output 1: -5
Input 2: n=5
Output 2: 3 */
#include<iostream>
using namespace std;
int f(int n){
    //Base case
    if(n==0) return 0;
    //Assumption
    f(n-1)+((n%2==0)?(-n):(n));
}
int main(){
    cout<<f(10)<<endl;
    return 0;
}
