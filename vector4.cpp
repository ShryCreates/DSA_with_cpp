//last occurrence of an element x
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6); //{1,2,3,2,1,3}
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter x:"<<endl;
    cin>>x;
    int occurrence=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurrence=i;
            break;
        }
    }
    cout<<"Occurrence of x is "<<occurrence<<endl;
    return 0;
}
