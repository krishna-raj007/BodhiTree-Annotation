#include<simplecpp>

main_program{
long long int n,m,s=1;
cin>>n>>m;


for (int i=1; i<n+1; i++)
{
s=(s%m)*(i%m)%m;
}
cout<<s;
}
