// C++ program using local and global variables.
#include<iostream>
using namespace std;
string name="Shreya";
void fun(){
    cout<<name<<endl;
}
int main(){
    cout<<name<<endl;
    name="Kumari";
    fun();
    return 0;
}
