#include<simplecpp>
main_program{
float q_1,n_1,a,b;
cin>>q_1;

repeat(q_1){
    double sum=0;
    cin >> n_1;
repeat(n_1){
cin>>a>>b;
sum=sum+ (a-b)*(a-b);
}
printf("%.2f\n",sqrt(sum));
}}
