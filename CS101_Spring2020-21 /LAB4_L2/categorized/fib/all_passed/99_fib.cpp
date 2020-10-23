#include<simplecpp>

main_program{
  int a=0,b=1,c,n,k=2,l=0;
  cin>>n;
  if(n>1){
    while(b<n){
      c=a+b;
      a=b;
      b=c;
      if(b==n){
        l++;
        break;
      }
      k++;
    }
  }
  if(n==1)
  cout<<1;
  else if(n==0)
  cout<<0;
  else if(l==1)
  cout<<k;
  else
  cout<<-1;
}
