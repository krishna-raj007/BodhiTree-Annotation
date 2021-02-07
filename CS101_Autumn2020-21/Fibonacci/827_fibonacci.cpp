#include<simplecpp>
main_program
{ long int n,k,x=0,y=1,i=0,z;

 cin>>n;
 cin>>k;
 for(;i<n;i++)
 {  if(i==0||i==1)
     {cout<<i%k<<"\n";}
     else
     {z=(x+y)%k;
     cout<<z<<"\n";
     x=y;
     y=z;
     }
  }





}
