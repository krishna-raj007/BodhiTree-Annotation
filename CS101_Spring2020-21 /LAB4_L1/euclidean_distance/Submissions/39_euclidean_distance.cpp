#include<simplecpp>

main_program{
int q;
cin >>q;
repeat(q){
int n;
cin >>n;
double a,b;
double add=0;
repeat(n){
 cin >>a >>b;
 add=((a-b)*(a-b))+add;
}
float answer=sqrt(add);
printf("%.2f\n", answer);
}
}
