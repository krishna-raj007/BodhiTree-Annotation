#include<simplecpp>

main_program{
float n1,n2, d, dist=0.00;
cin>>n1>>n2;
repeat(n1){
repeat(n2){
float a,b;
cin>>a>>b;
d = (a-b)*(a-b);
dist = dist + d;
}

printf("%.2f\n", sqrt(dist));
}}
