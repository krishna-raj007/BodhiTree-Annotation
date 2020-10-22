#include<simplecpp>
#include<stdio.h>
#include<math.h>

main_program
{
   float Q,n,a,b;
   float euc_dis =0;
   float sqr = 0;
   cin >> Q;

   int i,j;

   for(i=1;i<=Q;i++)
   {
       cin >> n;
       sqr = 0;
       for(j=1;j<=n;j++)
       {
           cin >> a;
           cin >> b;
           sqr = sqr + (a-b)*(a-b);
        }

        euc_dis = sqrt(sqr);

        printf("%.2f\n",euc_dis);

   }
}
