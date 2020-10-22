#include<simplecpp>

main_program{

int n,q;
cin>>q;
float a,b,sum=0,ans;
repeat(q){
cin>>n;
sum=0;
    repeat(n){
    cin>>a>>b;
    sum=sum+ (a-b)*(a-b);

    }
ans= sqrt(sum);
printf("%.2f\n", ans);
}
}
