#include<simplecpp>

main_program{

double m,n,k;
cin>>m;
repeat(m){
cin>>n;
repeat(n)
{
    double a,b;
    cin>>a>>b;

    k=k+(a-b)*(a-b);
}
printf("%.2f",sqrt(k));
}
















}
