#include<simplecpp>
main_program
{
    float A,B,D;
    int q;
    cin>>q;
    int n;

    float l=0;
    repeat(q)
    {
        cin>>n;
        repeat(n)
        {
            cin>>A;
            cin>>B;

            l +=pow(A-B,2);
        }
        D=sqrt(l);
        l=0;
        printf("%.2f\n",D);
    }
}
