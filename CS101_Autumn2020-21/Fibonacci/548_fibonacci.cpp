#include<simplecpp>
     main_program{
     long int n,k,a;
     cin>>n>>k;
     int x=0,y=1,z;
     cout<<x<<"\n"<<y<<"\n";
     repeat(n-2){
      z=x+y%k;
      a=z%k;
      cout<<z%k<<endl;
      x=y;
      y=z;
     }
     }
