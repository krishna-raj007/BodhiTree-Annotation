#include<simplecpp>
main_program{
   long long int n, k, f0=0, f1=1, fn, i;
     cin>>n>>k;
     cout<<f0%k<<"\n"<<f1%k<<"\n";
     for(i=2; i<n; i++){
     fn=(f0+f1)%k;
     cout<<fn<<"\n";
     f0=f1;
     f1=fn;
     }
      }
