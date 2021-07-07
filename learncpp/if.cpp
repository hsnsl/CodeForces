#include<iostream>
using namespace std;
int main(){
    bool ismale=true;
    bool isyoung=false;
    if(ismale && isyoung){ // 0 & 1
        cout <<"MALE AND YOUNG"<<endl;
    }
    if(ismale || isyoung){ // 0 or 1
        cout << "MALE OR NOT  OR YOUNG OR NOT"<<endl;
    }
  return 0;
 }
  
