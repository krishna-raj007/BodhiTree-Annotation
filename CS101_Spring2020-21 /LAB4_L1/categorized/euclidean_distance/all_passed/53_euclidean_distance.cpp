#include <simplecpp>
main_program
{
    int Q,j=1,i=1,n;
    double s,a,b;
    cin>>Q;
    while(j<=Q)
    {
        s=0;
        i=1;
        cin>>n;
        while(i<=n)
        {
            cin>>a;
            cin>>b;
            s=(a-b)*(a-b) +s;
            i++;
        }


        printf("%.2f\n",sqrt(s));

        j++;

    }











}









