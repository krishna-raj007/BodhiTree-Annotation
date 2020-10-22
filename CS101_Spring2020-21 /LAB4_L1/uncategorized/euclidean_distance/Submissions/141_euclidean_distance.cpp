#include<simplecpp>

main_program{
int p,n;
cin>>p;
for(int i=0;i<p;i++){
int n1;
cin>>n1;
double sum=0.0;
for(int i=0;i<n;i++)
{double a,b;
cin>>a>>b;
sum=sum+(a-b)*(a-b);}
printf("%.2f\n",sqrt(sum));
}}
