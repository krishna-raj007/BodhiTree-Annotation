#include<simplecpp>

main_program{
//fibonacci.cpp
int f0=0,f1=1,fn,n,k,i=3,p,q;
cin>>n>>k;
if(n==1)cout<<0%k;
if(n==2)cout<<0%k<<endl<<1%k;
if(3<=n){cout<<0<<endl;
         cout<<1<<endl;}
p=f0%k;q=f1%k;
while(i<=n)
 {fn=(p+q)%k;
  cout<<fn<<endl;
  p=q;
  q=fn;
  i=i+1;
  }

}
