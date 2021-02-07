#include<simplecpp>
main_program{
     int n,k,d=0,b=1,i=2,j;
     cin>>n>>k;
     cout<<d%k<<"\n"<<b%k<<"\n";
     while(i<n){
      j=(d+b)%k;
      d=b;
      b=j;
      i++;
      cout<<j%k<<"\n";}

     }
