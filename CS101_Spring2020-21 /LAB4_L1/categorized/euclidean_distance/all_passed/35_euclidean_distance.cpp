#include<simplecpp>

main_program
{

    double queries,a,b,sum,dif,square,dim,answer;
    cin>>queries;
    repeat(queries)
    {
        sum=0;
        cin>>dim;
        repeat(dim)
        {

            cin>>a>>b;
            dif=a-b;
            square=pow(dif,2);
            sum=sum+square;
        }
        answer=sqrt(sum);
        printf("%.2f\n",answer);
    }
}
