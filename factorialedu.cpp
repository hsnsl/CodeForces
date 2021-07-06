#include<iostream>
#include<math.h>
using namespace std;
int f(int x){
    int m=1;
    for(int i=1;i<=x;i++){
        m*=i;
    }
    return m;
}
int main(){
    int x;cin>>x;cout<<f(x)<<endl;
  return 0;
}
