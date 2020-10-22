#include<simplecpp>

main_program{

long int i = 1,k = 1,n,m,mod;
cin>>n>>m;
repeat(n)
{
 k = k%m;
 k *= (i%m);
 mod = k%m;
 i++;
}
cout<<mod;
}
