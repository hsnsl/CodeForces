#include<iostream>
#include<math.h>
using namespace std;
int f(int n){
    float a,b;
    a=(1+sqrt(5))/2;b=(sqrt(5)-1)/2;
    return (pow(a,n)-pow(b,n))/(2*pow(5,(1/n)));
}
int main(){
    int x;string t;
    cout<<"Fibonacci function"<<endl;
    cout<<"1)print the nth number of Fibonacci set"<<endl;
    cout<<"2)print the numbers of Fibonacci set from 0 to n"<<endl;
    cin>>t;
    if(t=="1"){
        cin>>x;cout<<f(x+1)<<endl;
    }
    if(t=="2"){
        cin>>x;
        for(int i=0;i<=x;i++){
            cout << f(i+1)<<",";
        }
    }
  return 0;
}
