#include<simplecpp>

main_program{
int q,n;
float r;
cin>>q;
repeat(q){
float s=0;
cin>>n;
repeat(n){
float a,b;
cin>>a>>b;
s=s+(a-b)*(a-b);
}r= sqrt(s);
printf("%.2f\n",r);

}}
