#include <simplecpp>

main_program{
  long long int f1=0, f2=1, fn;
  long long int i;
  long long int n,k;
  cin>>n>>k;

  for(i=1; i<=n; i++){
    if(i==1){
      cout<<f1<<endl;
      continue;
    }
    if(i==2){
      cout<<f2<<endl;
      continue;
    }
    fn=f2%k;
    f2 = f1%k + f2%k;
    f1=fn;
    cout<<f2%k<<endl;
    }
  }
