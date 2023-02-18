// You will be given an array of  integers and you have to print the integers in the reverse order.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     
     int n;
     cin>>n;
   
     int a[n];
      int b[n];
      for(int i=0;i<n;i++){
      cin>>a[i];
      }
      int c=0;
      for(int j=n-1;j>=0;j--)
      {
         b[c]=a[j];
         
         cout<<b[c]<<" "; 
         c++;
      }
    return 0;
}

