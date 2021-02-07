#include<simplecpp>

main_program{
  long int n,k,t=0,temp;
  cin>>n>>k;
  long int f0=0,f1=1;
  cout<<f0<<endl;
  cout<<f1<<endl;
  n-=2;
  while(n--){
    t=(f0+f1)%k;
    temp= t%k ;
    cout<<temp<<endl;
    f0=f1%k;
    f1=t%k;
  }
}
