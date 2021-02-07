#include<simplecpp>

main_program{
long long int n,k,i;
cin>>n>>k;

long long int a0=0,a1=1,next;
cout<<((a0)%k)<<endl;
cout<<((a1)%k)<<endl;

for(i=1;i<(n-1);i++)
  {
   next=a1+a0;
   a0=a1;
   a1=next;
   cout<<next%k<<endl;

  }
}
