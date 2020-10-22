#include<simplecpp>

main_program
{
    int Q,n;
    float a,b;
    float EucDist=0.0, sum=0.0;
    cin>>Q;
    repeat(Q)
    {
        cin>>n;
        repeat(n)
        {
            cin>>a>>b;
           sum=sum+(a-b)*(a-b);
        }
        EucDist=sqrt(sum);
        printf("%.2f\n",EucDist);
    }
}
