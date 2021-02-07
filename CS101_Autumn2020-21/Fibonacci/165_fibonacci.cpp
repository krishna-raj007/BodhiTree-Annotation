#include<simplecpp>

main_program{
  int f0=0,f1=1,f,n,k,i;
  cin>>n>>k;
  cout<<(f0%k)<<endl;
  for(i=1;i<=(n-1);i++){
    cout<<(f1%k)<<endl;
    f=(f0+f1)%k;
    f0=f1%k;
    f1=f%k;
  }
}
