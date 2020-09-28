#include <simplecpp>

main_program{
int n;
cin>>n;
for(int i=0;i<n;i++)
{

    int n1;
    cin>>n1;
    long sum=0.0;
    for(i=0;i<n1;i++)
    {

        double a,b;
        cin>>a>>b;
        sum+=(a-b)*(a-b);

    }
    printf("%.2f\n",sqrt(sum));
}
}
