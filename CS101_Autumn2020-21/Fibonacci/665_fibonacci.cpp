#include<simplecpp>

main_program{
//Write your code here
 long long int n,k,a=0,b=1,c;
 cin>>n>>k;
 cout<<"0"<<endl;
 repeat(n-1){
  a=a%k;
  b=b%k;
  c=a;
  a=a+b;
  b=c;

  cout<<(a)%k<<endl;}
}
