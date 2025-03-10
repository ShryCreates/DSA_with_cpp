// C++ program to print a value if it is divisible by three or five.
#include<iostream>
using namespace std;
int main(){
  int x;
  cout<<"Enter your choice of no.:";
  cin>>x;
  if((x%3==0)||(x%5==0)){
    cout<<x;
  }   
  else{
    cout<<"Invalid choice";
  }
  return 0;
}
