#include<simplecpp>

main_program{
int m,n;
float a,b,s;
cin>>m;
repeat(m){
s=0;
cin>>n;
repeat(n){
cin>>a>>b;
s= pow((a-b),2) + s;
}
printf("%.2f\n", pow(s,0.5));
}
}
