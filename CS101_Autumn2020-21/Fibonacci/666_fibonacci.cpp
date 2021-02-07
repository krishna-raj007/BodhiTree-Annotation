#include<simplecpp>

main_program{
//Write your code h

unsigned long long int n,k;
cin>>n>>k;
unsigned long long  int p=0,q=1,r;
for(unsigned long long  int i=0;i<=n-2;i++)
{
  if(i==0)

  {cout<<p%k<<endl<<q%k<<endl;
  }

  else
  {
  r=p+q;
  p=q;
  q=r;
  cout<<r%k<<endl;
  }


}
}
