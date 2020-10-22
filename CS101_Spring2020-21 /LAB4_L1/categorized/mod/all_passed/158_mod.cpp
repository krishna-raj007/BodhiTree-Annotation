#include<simplecpp>

main_program{
int n,m,j;
long int r;
cin>>n>>m;
j=n;
r=n%m;
repeat(n-1)
{
j--;
r=((r%m)*(j%m))%m;
}
cout<<r;
}
