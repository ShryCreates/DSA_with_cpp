#include<iostream>
using namespace std;
int main(){
    int CP,SP,amount;
    cout<<"Enter the CP:";
    cin>>CP;
    cout<<"Enter the SP:";
    cin>>SP;
    if(SP>CP){
        amount=SP-CP;
        cout<<"Profit:"<<amount<<endl;
    }
    else if(SP<CP){
        amount=CP-SP;
        cout<<"Loss:"<<amount<<endl;
    }
    else{
        cout<<"Niether loss nor profit."<<endl;
    }
    return 0;
}
