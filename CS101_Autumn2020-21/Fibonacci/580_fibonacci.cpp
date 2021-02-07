#include<simplecpp>
main_program{
     int n,k,a=0,b=1,i=2,j;
     cin>>n>>k;
     cout<<a%k<<"\n"<<b%k<<"\n";
     while(i<n){
      j=a+b;
      a=b;
      b=j;
      i++;
      cout<<j%k<<"\n";}

     }
