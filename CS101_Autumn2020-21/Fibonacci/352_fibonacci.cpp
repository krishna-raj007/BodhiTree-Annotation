#include<simplecpp>
main_program
{
  long long int a=0, b=1, c;
  long long int n,k;
  cin>>n>>k;
  cout<<a%k<<endl;
  cout<<b%k<<endl;
  repeat(n-2)
  {
    c=a+b;
    cout<<c%k<<endl;
    a=b%k;
    b=c%k;
  }
}
