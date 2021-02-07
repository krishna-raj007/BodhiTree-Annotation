#include<simplecpp>
main_program{
long int n,k,x;
cin>>n>>k;
int f0=0,f1=1;
for(int i=1;i<=n;i=i+1){
if(i==1){
cout<<f0<<endl;continue;}
if(i==2){
cout<<f1<<endl;continue;}

x=((f0)+(f1))%k;
cout<<x<<endl;
f0=f1;
f1=x;}}
