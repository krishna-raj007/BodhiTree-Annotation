#include<simplecpp>

main_program
{
    float a_i,b_i,d,f,e;
    int N,Q,i;
    cin>>Q;
    repeat(Q)
    {
        f=0;
        cin>>N;
        for(i=1; i<=N; i++)
        {
            cin>>a_i>>b_i;
            d=a_i-b_i;
            f=f+(d*d);
        }
        e=sqrt(f);
        printf("%.2f\n",e);
    }
}
