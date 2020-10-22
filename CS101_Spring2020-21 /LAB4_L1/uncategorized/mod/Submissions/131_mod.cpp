#include<simplecpp>

main_program
{
   long int n,m,i,fac;
   cin >> n;
   cin >> m;
   fac = 1;
   long int mod;

   for(i=1;i<=n;i++)
   {
       fac = fac * i;
       fac = fac % m;
   }


   cout << fac;


}
