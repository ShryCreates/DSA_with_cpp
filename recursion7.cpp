// Remove all the occurrence of 'a' from string s="abcax"
#include<iostream>
#include<string>
using namespace std;
string f(string &s, int idx, int n){
    // Base case
    if(idx==n) return " ";
    // Assumption
    string curr=" ";
    curr+=s[idx];
    // Self work
    return (s[idx]=='a'?" ":curr)+f(s,idx+1,n);
}
int main(){
    string s ="abcax";
    int n=5;
    cout<<f(s,0,n);
    return 0;
}
