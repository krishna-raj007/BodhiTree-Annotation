#include<simplecpp>

main_program{
  int a0=0,a1=1,n,k,r,a=0,l=1;
  cin>>n>>k;
  r=0%k; cout<<r<<endl;
  r=1%k; cout<<r<<endl;
  for(int i=1;i<=n-2;i++){
    a=a0%k+a1%k;
    a0=a1;
    a1=a;
    l=a%k;
    cout<<l<<endl;
    }

}
