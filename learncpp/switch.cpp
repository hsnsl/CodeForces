#include<iostream>
#include<math.h>
using namespace std;
string day(int x){
    string dn;
    switch(x){
        case 0:
            dn="Sunday";
            break;
        case 1:
            dn="Monday";
            break;
        case 2:
            dn="Tuesday";
            break;
        case 3:
            dn="Wednesday";
            break;
        case 4:
            dn="Thursday";
            break;
        case 5:
            dn="Friday";
            break;
        case 6:
            dn="Saturday";
            break;
    }
    return dn;
}
int main(){
    int x;cin>>x;cout<<day(x)<<endl;
  return 0;
 }
  
