#include<simplecpp>

main_program
{
    int q,p;
    cin>>q;
    float result;

    double a,b;
    repeat(q)
    {
        cin>>p;
        result =0;

        repeat(p)
        {
            cin>>a;
            cin>>b;

            result+=((a-b)*(a-b));
        }

        result=sqrt(result);
        printf("%.2f\n",result);
    }


}
