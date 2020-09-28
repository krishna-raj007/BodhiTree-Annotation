#include<simplecpp>
main_program{
int q;
cin >> q;
repeat(q){
int n;float d=0;
cin >> n;
repeat(n){
double a,b;
cin >> a >>b;
d+=(a-b)*(a-b);
}
d=sqrt(d);
printf("%.2f\n", d);
}
}

