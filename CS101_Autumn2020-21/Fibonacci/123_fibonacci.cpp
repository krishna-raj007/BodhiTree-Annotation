#include<simplecpp>

main_program{
long long int f0=0,f1=1,S=0,n,k;
cin>>n>>k;

if(n==0){
 cout<<0%k<<endl;
 }
else if(n==1){
 cout<<0%k<<endl;
 cout<<1%k<<endl;
 }
else if(n>=2){
 cout<<0%k<<endl;
 cout<<1%k<<endl;
 repeat(n-2){
  S=(f1+f0)%k;
  cout<<S<<endl;
  f0=f1;
  f1=S;
  }
 }
}
