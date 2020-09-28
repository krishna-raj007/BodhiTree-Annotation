#include<simplecpp>

main_program{

   int  q,n;

   float a,b,sum=0;
   cin>>q;
   repeat(q){
       cin>>n;
          repeat(n){
              cin>>a>>b;
              sum=sum+(a-b)*(a+b);

              }

              printf("%.2f\n",sqrt(sum));
              sum=0;
   }

}
