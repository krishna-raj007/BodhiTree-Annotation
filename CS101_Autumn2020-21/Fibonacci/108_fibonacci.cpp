#include<simplecpp>
main_program{
int long long n,k,i;
int long long a=0,b=1,c;
cin>>n>>k;
if(n==1) cout<<a;
if(n>=2) cout<<a<<endl<<b<<endl;
for(i=2;i<n;i++)
{
c=(a+b)%k;
cout<<c<<endl;
a=b;
b=c;

}}
