#include<simplecpp>

main_program
{
 long long unsigned int n,k,a=0,b=1;
 cin>>n>>k;

 if(n==1)
 {
  cout<<a;
 }

 else if(n==2)
 {
  cout<<a<<endl<<b<<endl;
 }
 else
 {
  cout<<a<<endl<<b<<endl;
  for(long int i=0;i<(n-2);i++)
  {
   long int sum=a+b;
   a=b;
   b=sum%k;
   cout<<sum%k<<endl;
  }
 }
}
