#include<simplecpp>

main_program{

int n,m,i,nfact=1;
cin>>n>>m;
if(n<=100000 && m<=1000000000)
{
for(i=n;i>=1;i--)
nfact=nfact*i;

}
cout<<nfact%m;
}
