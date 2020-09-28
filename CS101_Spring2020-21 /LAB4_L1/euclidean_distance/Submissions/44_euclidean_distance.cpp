#include<simplecpp>
main_program
{
int q;
cin>>q;
repeat(q)
{
    int n;
    cin>>n;
    float s=0;
    repeat(n)
    {
        float a,b;
        cin>>a>>b;
        float m=(a-b)*(a-b);
        s=s+m;
    }
    printf("%.2f\n", sqrt(s));
}
}
