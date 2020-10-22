#include<simplecpp>

main_program{
float a,b,n,p,l,s=0,sq,N;
cin>>N;
repeat(N){
cin>>n;
repeat(n){
cin>>a;
cin>>b;
p=(a-b);
l=p*p;
s=s+l;}
sq=sqrt(s);
printf("%.2f\n",sq);
cout<<endl;}
}
