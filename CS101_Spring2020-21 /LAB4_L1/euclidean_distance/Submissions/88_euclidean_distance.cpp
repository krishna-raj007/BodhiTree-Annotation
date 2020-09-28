#include<simplecpp>

main_program{
int a,n;
float r,f;
cin>>n;
repeat(n){
cin>>a;
r=0;
repeat(a){float c,d;
cin>>c>>d;
r=((c-d)*(c-d))+r;
f=sqrt(r);
}
printf("%.2f\n",f);}}
