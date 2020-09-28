#include<simplecpp>

main_program{
 int  q,n;
 float a,b,i=0;
 cin>>q;
 repeat(q){
  cin>>n;
  repeat(n){
   cin>>a>>b;
   i+=(a-b)*(a-b);
   }
   printf("%.2f\n",sqrt(i));
   i=0;
}
}
