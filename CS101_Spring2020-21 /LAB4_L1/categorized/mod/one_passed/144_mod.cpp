#include<simplecpp>
main_program{
   int n;
   long int m,frac=1,rst,i=1;
   cin>>n>>m;
   while(n>0){
   frac=frac*i,n--;
   }
   rst=frac%m;
   cout<<rst;
   }
