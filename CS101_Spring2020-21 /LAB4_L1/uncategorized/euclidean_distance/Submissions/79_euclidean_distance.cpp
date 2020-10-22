#include<simplecpp>
main_program
{
    int Q,N;
    float a,b,d=0.0;
    cin>>Q;
    repeat(Q)
    {
    cin>>N;
    repeat(N)
    {
    cin>>a>>b;
    d=d+(a-b)*(a-b);
    }
printf("%.2f\n",sqrt(d));
d=0.0;
    }
}
