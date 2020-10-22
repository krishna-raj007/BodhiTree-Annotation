#include<simplecpp>

main_program{
int n,m;
cin>>m;
repeat(m){
double a,b,s=0,j,ed;
n=0;
cin>>n;
for(int i=1;i<=n; i++){
cin>>a>>b;
j=(b-a)*(b-a);
s=s+j;
}
ed=sqrt(s);
printf("%.2f\n",ed);
}
}
