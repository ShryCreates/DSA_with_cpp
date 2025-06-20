//Call by reference using pointers
//Printing 1st and last index
#include<iostream>
using namespace std;
void compute(string s,char ch,int *first,int *last){
    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            *first=i;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==ch){
            *last=i;
            break;
        }
    }
} 
int main(){
    string s="aaabac";
    char ch='a';
    int first=-1;
    int last=-1;
    int *p1=&first;
    int *p2=&last;
    compute(s,ch,p1,p2);
    cout<<*p1<<" "<<*p2<<endl;
    cout<<first<<" "<<last<<endl;
    return 0;
}
