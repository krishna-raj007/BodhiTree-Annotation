#include<simplecpp>

main_program{
 long int n,k,n1=0,n2=1,n3,i,a;
 cin>>n>>k;
 cout<<n1%k<<endl;
 cout<<n2%k<<endl;
 for(i=2;i<n;i++)
 {
  n3=n1+n2;
  a=n3%k;
  cout<<a<<endl;
  n1=n2;
  n2=n3;
 }
}
