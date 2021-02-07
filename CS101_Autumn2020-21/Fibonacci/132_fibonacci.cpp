#include<simplecpp>
main_program{
int n, k, f0=0, f1=1, i;
cin>>n>>k;

for(i=1 ; i<=n; i++)
{
if(i==1){cout<<f0%k<<endl;
continue;}
if(i==2){
cout<< f1%k<<endl;
continue;}

int next=f0 + f1 ;
f0=f1 ;
f1=next ;
int x=next%k ;
cout<<x<<endl;}





}
