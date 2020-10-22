#include<simplecpp>

main_program{

 long int m,n,a,b=1,i=1;
 cin>>n>>m;
 repeat(n){
   b=(b*i)%m;
   i++;
   }
   cout<<b;
}
