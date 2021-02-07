#include<simplecpp>
main_program{
  long long int n, k, a=0, b=1, i;
  cin>>n>>k;
  a=a%k;
  b=b%k;
  for(i=1; i<=n/2; i++)
  {  cout<<a<<endl;
  cout<<b<<endl;
  a=((a%k)+(b%k))%k;
  b=((a%k)+(b%k))%k;
  }
  if(n%2!=0)
  cout<<a<<endl;
  }
