#include<simplecpp>
main_program{
long int n,m,b=1;
cin>>n>>m;
for(int i=1;i<=n;i++)
     {
        b=((i%m)*(b%m))%m;

     }
  cout<<b;
}

