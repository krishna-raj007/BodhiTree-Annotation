#include<simplecpp>

main_program{

int q,n;
cin >>q;
repeat(q){
cin >> n;
double sum = 0;
repeat(n){
double a1, b1;
cin >> a1 >> b1;
sum += (a1 -b1)*(a1 -b1);
}
float answer = sqrt(sum);
printf("%.2f\n" , answer);
}
}
