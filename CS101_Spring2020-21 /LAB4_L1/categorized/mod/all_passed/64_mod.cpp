#include<simplecpp>

main_program
{
  long int n,m;
  cin>>n>>m;
 long int prod=1;
  int i;
for(i=1;i<=n;i++)
{
prod=prod*i;
prod=prod%m;
}
cout<<prod;




}

