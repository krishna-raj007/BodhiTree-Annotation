#include<simplecpp>

main_program{
  int F0=0,F1=1,n,k;
  cin>>n;
  cin>>k;
  cout<<0<<endl<<1<<endl;
  for(int i=2,F=0;i<=n;i++){
    F=F+F0+F1;
    cout<<F%k<<endl;
    F=F+F1;
    }
  cout<<endl;
}
