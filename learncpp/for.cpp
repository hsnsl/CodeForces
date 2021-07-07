#include<iostream>
#include<math.h>
using namespace std;
string password;
void f(int x){
    cout << "Hello for "<<x<<"th time"<<endl;
}
int main(){
  for(int i=1;i<=5;i++){
      f(i);
  }
  return 0;
}
