#include<simplecpp>

main_program{
  long long int n,s,k;
  cin>>n>>k;
  cout<<0%k<<endl;
  long long int a=0,b=1;
  repeat(n-1){
    s=(a%k+b%k)%k;
    cout<<s<<endl;
    b=a;a=s;
    }
}
