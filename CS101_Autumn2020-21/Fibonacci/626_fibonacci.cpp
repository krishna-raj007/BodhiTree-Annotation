#include<simplecpp>

main_program{

    long long int n, k,i=1;

    cin>>n>>k;

    long long int f0=0 ,f1=1 ;

    cout<<f0%k<<endl<<f1%k<<endl;

    while(i<=(n-2)){

      long int  fi=f0+f1;
      cout<<(f0%k+f1%k)%k<<endl;

       f0=f1;

       f1=fi;

      i=i+1;}

      }
