#include<simplecpp>

main_program
{
    float a=0, b=0;
    int q,n=0;
    float distance=0, sq=0;
    cin>>q;
    repeat(q)
    {
        distance =0;
        sq=0;
        cin>>n;
        repeat(n)
        {
            cin>>a>>b;
            sq=sq+((a-b)*(a-b));
        }
        distance=sqrt(sq);
        printf("%.2f\n", distance);
    }
}
