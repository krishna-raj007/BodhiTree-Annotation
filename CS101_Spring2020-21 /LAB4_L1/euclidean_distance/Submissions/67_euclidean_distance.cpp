#include<simplecpp>

main_program{
int n,q;
cin>>q;
repeat(q){
cin>>n;
float sum=0;
repeat(n){
  float a,b;
  cin>>a>>b;
  sum=sum+(a-b)*(a-b);
  }
  printf("%.2f\n",sqrt(sum));
}}
