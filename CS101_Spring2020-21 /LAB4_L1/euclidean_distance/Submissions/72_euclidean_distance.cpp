#include<simplecpp>

main_program{
int q,dim;
double sum,result;
cin>>q;
repeat(q){
    cin>>dim;
    double a,b,sum=0;
    repeat(dim){
        cin>>a>>b;
        sum=sum+pow((a-b),2);
        }
        result=sqrt(sum);
        printf("%.2f\n", result);
    }

}
