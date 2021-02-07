#include<simplecpp>

main_program{
  int n,k,a=0,b=1,c;cin>>n>>k;
  cout<<a%k<<endl<<b%k<<endl;
  repeat(n-2){
    c=(a+b)%k;
    cout<<c<<endl;
    a=b;b=c;
    }
}
