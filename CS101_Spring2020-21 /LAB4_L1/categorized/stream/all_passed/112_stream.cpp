#include<simplecpp>

main_program
{
       int n,maxi;
       cin>>n; maxi=n;
       while(n!=-1)
    {
        int m;
          cin>>m; n=m;
         if(n>=maxi)
         maxi=n;
       }
       cout<<maxi;
       }
