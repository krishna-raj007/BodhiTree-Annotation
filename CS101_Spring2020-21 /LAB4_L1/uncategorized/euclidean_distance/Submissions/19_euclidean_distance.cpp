#include<simplecpp>

main_program{
int n,p;
float a,b,s,t=0;
cin >> n;
repeat(n){
cin >> p;
repeat(p){
cin >> a >> b;
s = (a-b)*(a-b);
t = s + t;
}
printf("%.2f\n", sqrt(t));
t=0;
}
}
