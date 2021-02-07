#include<simplecpp>
main_program{
  long long int n,k,mod;
  cin>>n>>k;
  long long int F0=0,F1=1,mod1=F0%k,mod2=F1%k;
  cout<<mod1<<endl;
  cout<<mod2<<endl;
  repeat(n-2){
  mod=(mod1+mod2)%k;
  cout<<mod<<endl;
  mod1=mod2;
  mod2=mod;



  }

}
