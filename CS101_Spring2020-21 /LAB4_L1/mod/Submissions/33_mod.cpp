#include<simplecpp>

main_program{
long long int i,m,s=1,n;
cin >> n >> m;
for(i=1; i<=n; i++)
{s=(s%m)*(i%m)%m;}
cout << s;
}
