#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b;
    char sign;
    cin>>a>>b>>sign;
    if(sign == '+'){cout <<a+b<<endl;}
    if(sign == '-'){cout<<a-b<<endl;}
    if(sign == '*'){cout<<a*b<<endl;}
    if(sign == '/'){cout<<a/b<<endl;}
    if(sign == '^'){cout<<pow(a,b)<<endl;}
  return 0;
 }
  
