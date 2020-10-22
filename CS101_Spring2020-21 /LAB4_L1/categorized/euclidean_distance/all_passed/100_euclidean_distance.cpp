#include<simplecpp>

main_program{
int q;
float r,sum=0;
cin>>q;
repeat(q){
    sum=0;
int n;
cin>>n;
repeat(n){
float a,b,m;
cin>>a>>b;
m = (a-b)*(a-b);
sum = sum + m;
}
r = sqrt(sum);
printf("%.2f\n",r);
}
}
