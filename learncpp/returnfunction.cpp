#include<iostream>
#include<math.h>
using namespace std;
float distance(float x1,float y1,float x2,float y2){
    return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}
int main(){
    cout << distance(2,2,3.14,3.14)<<endl;
  return 0;
 }
  
