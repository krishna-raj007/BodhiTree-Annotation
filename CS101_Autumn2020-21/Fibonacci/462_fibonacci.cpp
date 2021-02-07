#include<simplecpp>

main_program{
  long long int a=0;
  long long int b=1;
  long long int c;
  long long int n;
  long long int k;
  cin>>n>>k;
  cout<<a%k<<endl;
  cout<<b%k<<endl;
  repeat(n-2){
    c=abs(a%k)+abs(b%k);
    cout<<c%k<<endl;
    a=abs(b%k);
    b=abs(c%k);
  }
}
