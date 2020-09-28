#include<simplecpp>
main_program{
 long int n,d,a,b,c,f,e;
 cin>> n;
 repeat(n){
   cin>>d;
   if(d%2==0)
   a=1;
   else{
   a=0;}
   if(d%3==0)
   b=1;
   else{
   b=0;}
   if(d%5==0)
   c=1;
   else{
   c=0;}
   if(d%7==0)
   e=1;
   else{
   e=0;}
   if(d%11==0)
   f=1;
   else{
   f=0;}



 }

cout<< a+b+c+e+f;



}
