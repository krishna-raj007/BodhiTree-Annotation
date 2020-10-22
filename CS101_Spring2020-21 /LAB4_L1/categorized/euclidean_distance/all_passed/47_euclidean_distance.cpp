#include <simplecpp>

main_program{
    double q,dim,a,b;
    double sum=0;
    cin>>q;
    repeat(q){
        cin>>dim;
        repeat(dim){
        cin>>a>>b;
        sum+=(a-b)*(a-b);

        }
    sum=sqrt(sum);
    printf("%.2f\n",sum);
    sum=0;
}

}











