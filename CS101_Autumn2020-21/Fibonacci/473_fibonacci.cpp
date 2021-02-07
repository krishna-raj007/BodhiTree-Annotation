#include <iostream>
using namespace std;
int main() {
  int F0=0,F1=1,F2,i,n,k;
 cin>>n>>k;
 int f0=F0%k;int f1=F1%k;
 cout<<f0<<" "<<f1<<" ";
 for(i=2;i<n;++i)
 {
  F2=F0+F1;
  int f2=F2%k;
  cout<<f2<<" ";
  F0=F1;
  F1=F2;
 }
   return 0;}
