#include<simplecpp>
main_program{
int n,a;
float i,j;
cin>>n;
repeat(n){
cin>>a;
float dist,d=0;
repeat(a){
cin>>i>>j;
d=d+(i-j)*(i-j);
}
dist=sqrt(d);
printf("%.2f\n",dist);
}
}
