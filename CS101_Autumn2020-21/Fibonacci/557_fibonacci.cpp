#include<simplecpp>

main_program
{
 unsigned long long n,k,sum,term1=0,term2=1;
 cin>>n>>k;
 cout<<term1%k<<endl<<term2%k<<endl;
 repeat(n-2)
 {
  sum=(term2+term1)%k;
  cout<<sum%k<<endl;
  term1=term2%k;
  term2=sum%k;
  }
  }
