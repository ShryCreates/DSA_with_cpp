#include<iostream>
using namespace std;
int main(){
    cout<<"Armstrong no. in the range of 100 to 500 are:"; //153=1^3+5^3+3^3(armstrong no.)
    for(int i=0;i<=500;i++){
        int sum=0;
        int t=i;
        while(t!=0){
            sum=sum+((t%10)*(t%10)*(t%10));
            t/=10;
        }
        if(sum==i){
            cout<<i<<endl;
        }
    }
    return 0;
} 
