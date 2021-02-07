#include<simplecpp>

main_program

{
 long int f0=0, f1=1, i;
 long int k,n,f;
 cin>>n>>k;

cout<<f0<<" "<<f1<<" ";

f=f0+f1;
 for(i=1;i<=n-2;i++)

 {

  f=(f0+f1)%k;
  f0=f1;

  f1=f;
  cout<<f<<" ";

 }





}
