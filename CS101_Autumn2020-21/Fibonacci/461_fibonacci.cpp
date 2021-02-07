#include<simplecpp>

main_program{
unsigned long long int n,k,i=2,a=0,b=1,c;
cin>>n>>k;
cout<<a<<endl<<b<<endl;

while (i<n){
  c=a+b;
  cout<<c%k<<endl;
  a=b%k;b=c%k;
  i=i+1;
}
}
