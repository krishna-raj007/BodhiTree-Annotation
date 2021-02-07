#include<simplecpp>

main_program{
long long int n,k,F0=0,F1=1,Fa,Fb,Fc,a;
cin>>n>>k;
Fa=F0;
Fb=F1;
if(n==1)cout<<F0;
else if(n==2)cout<<F1;
else
{cout<<F0%k<<endl<<F1%k<<endl;
 while(n>2)
 {n--;
  Fc=(Fb+Fa)%k;
  cout<<Fc<<endl;
  Fa=Fb;
  Fb=Fc;
  }
 }
}
