#include <simplecpp>

main_program{
int n,k,f0=0,f1=1;

cin>>n>>k;
cout<<f0<<endl<<f1<<endl;

for(int i=1; i<=n-2; i++){
  int fi;
  fi=(f1%k+f0%k)%k;
  f0=f1;
  f1=fi;

  cout<<fi<<endl;
  }
}
