#include<iostream>
using namespace std;
int main(){
  string n="bat";
  string name="hasan";
  string father="ismail";
  string  family="saleh";
  string full="hasan ismail saleh";
  cout << name << endl; // output "hasan"
  cout << name.length() << endl; //length of hasan is 5
  cout << name[0] << name[1] << name[2] <<endl; //out the first and second and third letter of hasan ---> has
  cout << "hasan\nismail\nsaleh\n";//out hasan[new line]ismail[new line]saleh[newline]
  n[0]='c';
  cout << n <<endl;
  cout<< full.find("saleh",10)<<endl;//if it return number (n)
  //and n> full.length ["saleh is not defined"] else .... it's defined and it returns it position
  cout << full.substr(6)<<endl; //remove letters from 0 to 6 [first 7 letters]
  return 0;
}
