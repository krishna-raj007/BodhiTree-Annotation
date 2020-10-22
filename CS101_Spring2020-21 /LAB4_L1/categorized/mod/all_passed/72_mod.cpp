#include<simplecpp>

main_program{
long int m,n;
cin>>n>>m;
int r=1;
int i=1;
repeat(n)
{
    r=(r*(i%m))%m;
    i++;
}
cout<<r;
}
