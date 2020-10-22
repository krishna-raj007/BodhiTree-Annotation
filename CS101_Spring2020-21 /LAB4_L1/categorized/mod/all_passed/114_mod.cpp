#include<simplecpp>

main_program{
long int n;
long int m;
cin>>n>>m;
long int N = 1;
for(int i = 1;i<(n+1);i++)
{
   N=(N*i)%m;
}

cout<<(N%m);
}
