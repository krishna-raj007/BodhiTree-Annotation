#include<simplecpp>

main_program{
 long long int k,n;
 cin>>n>>k;
 int t=0,s=1;
 cout<<0<<endl;
 cout<<1<<endl;
 int p,r,l;
 r=t;
 l=s;
 repeat(n-2){
  p=r+l;
  cout<<p%k<<endl;
  r=l;
  l=p;
  }

}
