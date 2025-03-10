// C++ program by passing string to a function.
#include<iostream>
using namespace std;
string welcome(string name){
    return "Welcome "+name;
} 
int main(){
   string str= welcome("Shreya");
   cout<<str;
   return 0;
}
