#include<simplecpp>

main_program{

  long int n,m,p=1,i;
  cin>>n>>m;
  for(i=1;i<=n;i++)
  {
    p=(p*(i%m))%m;
  }
  cout<<p;

}
