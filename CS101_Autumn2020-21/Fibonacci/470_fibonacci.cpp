#include<simplecpp>
     main_program{
     long int n,k,a,m;
     cin>>n>>k;
     int x=0,y=1,z;
     cout<<x<<endl<<y<<endl;
     m = n-2;
     repeat(n-2){
      z=x+y;
      a=z%k;
      cout<<a<<endl;
      x=y;
      y=z;
     }
     }
