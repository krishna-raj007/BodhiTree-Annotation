#include<simplecpp>
#include<iomanip>
main_program{
  long long int f0=0,f1=1,fn,n,k,i=1;
  cin>>n>>k;
  cout<<f0<<endl<<f1<<endl;
  while(i<=n-2){
    fn=(f1+f0)%k;
    f0=f1;
    f1=fn;
    cout<<fn%k<<endl;
    i+=1;
  }
}

