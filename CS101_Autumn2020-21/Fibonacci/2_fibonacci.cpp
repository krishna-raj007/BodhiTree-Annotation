#include<simplecpp>
main_program{
unsigned long long int n,k,f0=0,f1=1,f,p,i,t;
cin>>n>>k;
cout<<f0<<"\n"<<f1<<"\n";
for(i=2;i<n;i++){
f= (f0+f1)%k;
f0=f1;
f1=f;t=f;
while(t>k){
t=t-k;}
p=t%k;
cout<<p<<"\n";}}
