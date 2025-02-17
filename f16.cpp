#include<iostream>
using namespace std;
bool checkEligible(int age,int limit){
    if(age>=limit){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int voting_limit=18;
    int is_eligible_for_vote=checkEligible(19,voting_limit);
    if(is_eligible_for_vote){
        cout<<"Person is eligible for vote."<<endl;
    }
    else{
        cout<<"Person is not eligible for vote."<<endl;
    }
    return 0;
}
