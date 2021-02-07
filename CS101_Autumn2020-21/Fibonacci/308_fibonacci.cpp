#include<simplecpp>

main_program{
  int n,i,k,f1,f2,fi;
  cin>>n>>k;
  f1=0;
  f2=1;
  cout<<f1<<endl<<f2<<endl;
  for(i=3; i<=n; i++){
    fi=f1+f2;
    fi=fi%k;
    cout<<fi<<endl;
    f1=f2;
    f2=fi;
    }
  }
