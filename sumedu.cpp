#include<iostream>
#include<math.h>
using namespace std;
int sum=0;
int main(){
  string chose;int a,b,k;
  cout << "Created By: h⏟s⏟n⏟s⏟l"<<endl;
  cout << "Choose type of sum:"<<endl;
  cout << "a)Σ(x^k)[a,b]"<<endl;
  cout << "b)Σx[a,b]"<<endl;
  cout << "c)Σ(x*x)[a,b]"<<endl;
  cin>>chose;
  cout << "a b ";cin>>a>>b;
  sum=0;
  if(chose=="a"){
    cout << "k";cin>>k;
    for(int i=a;i<=b;i++){
      sum+=pow(i,k);
    }
  }
  if(chose=="b"){
      cout << ((a+b)*(b-a+1))/2<<endl;
  }
  if(chose=="c"){
      for(int h=a;h<=b;h++){
          sum+=pow(h,2);
      }
  }
  cout << sum<<endl;
  cout << "===========================End=========================="<<endl;
  return 0;
}
