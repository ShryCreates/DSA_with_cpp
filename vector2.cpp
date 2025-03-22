//looping in vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    //for loop
    for(int i=0;i<5;i++){
        int elements;
        cin>>elements;
        v.push_back(elements);
    }
    //for each loop
    for(int ele:v){
        cout<<ele<<" "<<endl;
    }
    //while loop
    int i=0;
    while(i<v.size()){
        cout<<v[i]<<" "<<endl;
        i++;
    }
  for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<endl;
    return 0;
}
