#include<iostream>
using namespace std;
class objectCreate{
  protected:
  int count=0;
  public:
  objectCreate(){
    count++;
    cout<<"Object of a class created.\n No. of the class currently:"<<count <<endl;
  }
  ~objectCreate(){
    count--;
    cout<<"Latest object of  a class deleted.\n No. of objects of  a class currently:"<<count<<endl;
  }
};
int main(){
    objectCreate a;
    return 0;
}
