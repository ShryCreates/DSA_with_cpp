// Program to check whether a given no. is palindrome or not
#include<iostream>
using namespace std;
bool f(int num, int *temp){
    // Base case
    if(num>=0 && num<=9){
        int lastDigitOfTemp= (*temp)%10; //Assumption
        (*temp)/=10;
        return (num==lastDigitOfTemp);
    }
    //Self work
    bool result=(f(num/10, temp) and (num%10)==(*temp)%10);
    (*temp)/=10;
    return result;
}
int main(){
    int num=12621;
    int anotherNum=num;
    int *temp=&anotherNum;
    cout<<f(num,temp);
    return 0;
} 
