#include<simplecpp>

main_program
{
  int f0=0 ,f1=1, fk,n,k;
  cin>>n>>k;
  cout<<0<<endl<<1<<endl;
  repeat(n-2){
    fk = f0 + f1;
    f0 = f1;
    f1 = fk%k;
    cout<<fk%k<<endl;
    }
}
