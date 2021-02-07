#include<simplecpp>

main_program{

long long t1=0,t2=1,t3,i,n,k;

 cin>>n>>k;
if(n==1) cout<<t1;
if(n>=2) cout<<t1<<endl<<t2<<endl;

 for(i=2;i<n;i++)
 {
  t3=(t1+t2)%k;
  cout<<t3<<endl;
  t1=t2;
  t2=t3;
 }

}


