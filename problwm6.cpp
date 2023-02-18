// Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.

#include <iostream>
#include <cstdio>
using namespace std;


    
int max_of_four(int a,int b,int c,int d)
{

   int max=0;
   int arr[4]={a,b,c,d};
   for(int i=0;i<5;i++)
   if(arr[i]>max)
   max=arr[i];
   return max;
}

int main(){
    int p,q,r,s;
    cin>>p>>q>>r>>s;
    cout<<max_of_four(p,q,r,s);
    return 0;
}
