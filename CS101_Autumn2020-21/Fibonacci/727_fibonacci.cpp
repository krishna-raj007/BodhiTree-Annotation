#include<simplecpp>

main_program{
 long long int n, k;
 cin>>n >> k;
 long long int a=0, b=1, c;
 cout<<a<<endl;
 cout<<b<<endl;
 while(n>2){
  c = (a+b)%k;
  cout<<c%k<<endl;
  a = b%k;
  b = c%k;
  n = n-1;
 }
}
