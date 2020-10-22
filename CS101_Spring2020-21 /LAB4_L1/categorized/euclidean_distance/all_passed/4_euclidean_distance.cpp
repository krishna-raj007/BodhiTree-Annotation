#include<simplecpp>
main_program
{
   long int a,b;
   float g,c,d,e,f;
   cin >>a;
   repeat(a)
   {
cin >>b;
f=0;
   repeat(b)
   {
       cin >>c>>d;
       e=pow(c-d,2);
       f=f+e;
   }
   g=sqrt(f);
   printf("%.2f\n",g);
   }
}
