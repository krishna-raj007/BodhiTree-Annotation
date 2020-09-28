#include<simplecpp>

main_program{

int n,Q;
float Dist = 0,a,b,fD;
cin>>Q;
repeat(Q)
{
    cin>>n;
   repeat(n)
   {
   cin>>a>>b;
   Dist = Dist + pow((a-b),2);
   }
   fD = sqrt(Dist);
   printf("%.2f\n",fD);
   Dist = 0;
}
}
