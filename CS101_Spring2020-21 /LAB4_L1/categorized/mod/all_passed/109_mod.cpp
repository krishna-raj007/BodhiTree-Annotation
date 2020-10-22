#include<simplecpp>

main_program{
long int n,m,mod=1;
cin>>n>>m;
repeat(n)
{
    mod=(mod)*(n%m)%m;
    n--;
}
cout<<mod;


}
