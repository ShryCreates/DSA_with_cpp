//taking input and printing
#include<iostream>
using namespace std;
int main(){
    char vowels[5];
    //for loop
    /*for(int i=0;i<5;i++){
        cin>>vowels[i];
    }*/
    //for each loop
    for(char &element:vowels){
    cin>>element;
    }
    for(int i=0;i<5;i++){
        cout<<vowels[i]<<" ";
    }
    return 0;
}
