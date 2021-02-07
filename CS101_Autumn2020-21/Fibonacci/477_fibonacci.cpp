#include<simplecpp>

main_program{
//Write your code here
long long int n,k,a=0,b=1,c;
cin>>n>>k;
cout<<a%k<<endl;
cout<<b%k<<endl;
repeat(n-2){
  cout<<(a+b)%k<<endl;
  c=(a+b)%k;a=b%k;b=c;}
}
