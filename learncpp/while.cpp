#include<iostream>
using namespace std;
string password;
void f(){
    cout<<"Password:";
    cin>>password;
}
int main(){
  f();
  while(password != "hsnsl"){
      cout << "Password is InCorrect!"<<endl;
      f();
  }
  cout<<"Password is Correct"<<endl;
  return 0;
 }
  
