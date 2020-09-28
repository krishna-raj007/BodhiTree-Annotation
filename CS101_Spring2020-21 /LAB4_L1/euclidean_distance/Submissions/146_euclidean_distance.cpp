#include<simplecpp>

main_program{
int Q,n,x,y;
float ed,t;
cin>>Q;
repeat(Q)
{
    cin>>n;
    repeat(n)
    {
        cin>>x>>y;
        t=t+(x-y)*(x-y);
    }
    ed=sqrt(t);
    printf("%.2f\n",ed);
}
}
