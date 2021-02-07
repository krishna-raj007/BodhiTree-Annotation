#include<simplecpp>

main_program{
long int t=0,s=0,n,f,k,u=1;
cin>>n>>k;
cout<<t<<endl;
for(int i=1;i<=n;i++)
{
s=t+u;
t=u;
u=s;
cout<<s<<endl;

}
f=s%k;
cout<<f;
}
