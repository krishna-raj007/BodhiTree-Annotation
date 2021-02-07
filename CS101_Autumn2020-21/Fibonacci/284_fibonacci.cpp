#include<simplecpp>

main_program{
unsigned int f1=1,f2=0,n,k,r,c=0;
cin>>n>>k;
if ( n<=10^5 && n>=1 && k>1 && k<=10^5 ){
for (int i=1; i<=n; i++){
  if (i==2) cout<<f2<<endl;
  else {r=c%k;
  cout<<r<<endl;
  c=f1+f2;
  f2=f1;
  f1=c;
  }
}
}

}
