#include<simplecpp>
main_program{
int q;
cin>>q;
double a,b,md = 0;
repeat(q){
int N = 0;
cin>>N;
repeat(N){
cin>>a>>b;
md += (a-b)*(a-b);
}
md = sqrt(md);
printf("%.2f\n",md);
md = 0;
}
}
