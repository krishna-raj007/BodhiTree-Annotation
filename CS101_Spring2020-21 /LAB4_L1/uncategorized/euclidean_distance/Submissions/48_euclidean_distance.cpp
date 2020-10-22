#include<simplecpp>

main_program{
int Q,n;
cin>>Q;
double ans ,a,b;
repeat(Q) {
    double d=0;
    cin>>n;
        repeat(n){
                cin>>a>>b;
                d+=(a-b)*(a-b);

                }
    ans=sqrt(d);
    printf("%.2f\n", ans);
        }}
