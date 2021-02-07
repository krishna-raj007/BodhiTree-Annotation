#include<simplecpp>
main_program{
int n, k, a=0,i=0,s=0,t=1;
cin>> n>>k;
if(n==1)
cout<<0<<endl;
if(n==2)
cout<<0<<endl<<1<<endl;
if(n>=3)
cout<<0<<endl;
while(i!=n && n>=3 && i<=n-2){
  a=s;
  s=s+t;
  t=a;
  s=s%k; cout<<s<<endl;
  i=i+1;

}


}
