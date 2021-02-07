#include<simplecpp>

main_program{
  long int n,k;
  cin>>n;
  cin>>k;
  long int f0=0,f1=1;
  long int i=0;
  cout<<f0%k<<endl;
  cout<<f1%k<<endl;
  while(i<=n-3){
    long int fi;
    fi=f0+f1;
    cout<<fi%k<<endl;
    long int m=f1,n=fi;
    f0=m%k;
    f1=n%k;
    i++;
  }
}
