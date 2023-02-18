// The function is declared with a void return type, so there is no value to return. Modify the values in memory so that  contains their sum and  contains their absoluted difference.

#include <iostream>
using namespace std;

void update(int a,int b) {
  int sum,diff;
  sum=a+b;
  diff=a-b; 
  cout<<sum<<endl;
  cout<<abs(diff)<<endl;    
}

int main() {
     int p,b;
     cin>>p>>b;
    update(p,b);
    return 0;
}




