#include<simplecpp>
main_program
{
long n,m,s=1;
cin>>n>>m;
while(n>=1)
{
    s=s*(n--)%m;
}
printf("%ld",s%m);
}
