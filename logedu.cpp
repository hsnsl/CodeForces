#include<iostream>
#include<math.h>
using namespace std;
double dlog(double base, double x) {
    return (log(x) / log(base));
}
int main(){
    cout << dlog(2,32)<<endl;
  return 0;
}
