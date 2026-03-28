/* Given an array of the fruits, you are supposed to sort it in lexicographical order using the selection sort.

   Input:["papaya","lime","watermelon","apple","mango","kiwi"]
   Output:["apple","kiwi","lime","mango","papaya","watermelon"]
*/

#include<iostream>
#include<string.h>
using namespace std;
void sort(char fruit[][60],int n){
    for(int i=0;i<n-1;i++){
        //finding the min ele
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(fruit[min_idx],fruit[j])>0){
                min_idx=j;
            }
        }
        //place the min ele at the beginning
        if(i!=min_idx){
            char temp[60];
            strcpy(temp, fruit[i]);
            strcpy(fruit[i], fruit[min_idx]);
            strcpy(fruit[min_idx], temp);
        }
    }
    return;
}
int main(){
    char fruit[][60]={"papaya","lime","watermelon","apple","mango","kiwi"};
    int n=sizeof(fruit)/sizeof(fruit[0]);
    sort(fruit,n);
    for(int i=0;i<n;i++){
        cout<<fruit[i]<<" ";
    }
    cout<<endl;
    return 0;
}
