#include<simplecpp>
main_program{
  long long int n,a=1,b=1,r=2,t=1;
  cin>>n;
  if(n==0)r=0;
  else if(n==1)r=1;
  else{
    while(t<=n){
      t=a+b;
      r=r+1;
      a=b;
      b=t;
      if(t==n)break;
    }
  if(t!=n)r=-1;
  }
  cout<<r;
}
