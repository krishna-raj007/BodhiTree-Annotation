#include<simplecpp>

main_program{
int n,p;
float a,b,s,d;
cin>>p;
 repeat(p){
 cin>>n;
 d=0;
 s=0;
 repeat(n){
 cin>>a>>b;
 s=(a-b)*(a-b);
 d=s+d;
 }
printf("%0.2f\n",sqrt(d));
 }
 }
