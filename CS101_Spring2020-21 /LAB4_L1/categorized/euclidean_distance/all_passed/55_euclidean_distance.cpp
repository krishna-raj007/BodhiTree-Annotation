#include<simplecpp>

main_program{

int Q,n;
float a,b,S1;
cin>>Q;

repeat (Q){
    S1 = 0;
    cin>>n;
repeat(n){
cin>>a>>b;
S1 =  S1 + (a-b)*(a-b);
}
printf("%.2f\n", sqrt(S1));
}
}
