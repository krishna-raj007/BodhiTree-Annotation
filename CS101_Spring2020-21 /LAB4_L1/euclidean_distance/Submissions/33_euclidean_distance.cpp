#include<simplecpp>

main_program{
int q,i,n,j;
double answer,s;
cin >> q;
for(i=1; i<=q; i++)
{
    cin >> n;
    for(j=1, s=0; j<=n; j++)
    {
        float a,b;
        cin >> a >> b;
        s=s+(a-b)*(a-b);
    }
    answer=sqrt(s);
printf("%0.2f\n", answer);
}
}
