#include<iostream>
using namespace std;
int main(){
  string t;int a,b,c,x,y;
  cout<<"Application of Functions:"<<endl;
  cout<<"1)Linear    2)quadratic"<<endl;cin>>t;
  if(t=="1"){
      cout<<"ax+b=0"<<endl;cin>>a>>b>>x;cout<<(a*x+b)<<endl;
  }
  if(t=="2"){
      cout<<"ax2+bx+c=0"<<endl;cin>>a>>b>>c>>x;cout<<(a*x*x+(b*x)+c)<<endl;
  }
  return 0;
}
