#include<simplecpp>

main_program{
//Write your code here
long long int n,k,f1=0,f2=1,f,i=3;
cin>>n>>k;
if(n==1)cout<<"0";
if(n==2)cout<<"0"<<endl<<1%k;
else
{
cout<<"0"<<endl<<1%k;
while(i<=n)
{
  f=(f1+f2)%k;
  f1=f2;
  f2=f;


  cout<<endl<<f;
  i++;
}}

}
