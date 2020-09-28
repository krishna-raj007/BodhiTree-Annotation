#include<simplecpp>

main_program{
int n,m,r;
int k=1;
cin>>n>>m;
int i=1;
repeat(n-1)
{
k=k*i;
i++;
r=((k%m)*(i%m))%m;
}
cout<<r;
}
