#include<simplecpp>
#include<stdio.h>
#include<math.h>

main_program
{
   long int n,i,a;
   cin >> n;
   cout<< "\n";
   long int larg=0;
   for(i=1;i<=n;i++)
   {
       cin >> a;
       cout << " ";
       if(a>larg)
       {
           larg = a;
       }
    }
    cout << larg;
}
