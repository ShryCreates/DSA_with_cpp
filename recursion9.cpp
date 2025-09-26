/* Given a no. n. Find the increasing sequence from 1 to n without using any loop.
Constraints: 0<n<10^6
Input 1: n=4
Output: 1 2 3 4
Input 2: n=2
Output: 1 2 */
#include<iostream>
using namespace std;
void f(int n){
    // Base case
    if(n<1) return;
    //Assumption
    f(n-1);
    cout<<n<<" ";
}
int main(){
    f(5);
    return 0;
}
