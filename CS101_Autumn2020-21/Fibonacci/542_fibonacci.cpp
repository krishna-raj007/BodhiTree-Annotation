#include<simplecpp>
main_program
{ int n,f1=0,f2=1,f=0,k;
  cin>>n>>k;
  for(int i=0;i<n;i++)
   {  if(i==0)
      {cout<<f1%k<<endl;
       continue;
      }
      if(i==1)
      {cout<<f2%k<<" "<<endl;
       continue;
      }
      f=f1+f2;
      f1=f2;f2=f;
      cout<<f%k<<" "<<endl;

   }
}
