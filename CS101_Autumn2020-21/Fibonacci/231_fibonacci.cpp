#include<simplecpp>

main_program{

  long long int n,k,mod;
  cin>>n>>k;

  long long int f0=0, f1=1,mod1=f0%k,mod2=f1%k;

  cout<<mod1<<"\n";
  cout<<mod2<<"\n";

  repeat(n-2){
    mod=(mod1+mod2)%k;
    cout<<mod<<"\n";
    mod1=mod2;
    mod2=mod;

  }

}
