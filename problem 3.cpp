//Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
  int a;
  long b;
  char c;
  float f;
  double d;
  cin>>a;
  cin>>b;
  cin>>c;
  cin>>f;
  cin>>d;
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<c<<endl;
  cout<<fixed<<setprecision(6)<<f<<endl;
  cout<<fixed<<setprecision(9)<<d<<endl;
     return 0;
}
