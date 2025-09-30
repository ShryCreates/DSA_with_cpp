/* Given a no. n. Print if it is an armstrong no. or not.
An armstrong no. is a no. if the sum of every digit in that no. raised to the power of total digits in that no. is equal to the no.
Input:153
Output:YES
153=1^3+5^3+3^3 
*/
#include<iostream>
using namespace std;
int pow(int p,int q){
    //base case
    if(q==0){
        return 1;
    }
    else if(q%2==0){
        // if q is even
        int res=pow(p,q/2);
        return res*res;
    }
    else{
        // if q is odd
        int res=pow(p,(q-1)/2);
        return p*res*res;
    }
}
int f(int n,int d){
    //base case
    if(n==0) return 0;
    return pow(n%10,d)+f(n/10,d);
}
int main(){
    int n;
    cout<<"Enter the no. to be checked:";
    cin>>n;
    int no_of_digits=0;
    int temp=n;
    while(temp>0){
        temp=temp/10;
        no_of_digits++;
    }
    int result=f(n,no_of_digits);
    if(result==n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
