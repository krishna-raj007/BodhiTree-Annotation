#include<simplecpp>
main_program{
long int n;
long long int m,fact=1;
cin>>n>>m;
for(int i=1; i<=n;i++)
{
 fact=(fact*i)%m;
}
cout<<fact%m;
}
