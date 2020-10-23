#include<simplecpp>

main_program
{
    long long int i=0,n;
    double sum=0;
    cin >> n;
    for(i=0; i<=n; i++)
    {
        sum=sum + pow(-1,i)*(1.0)/(2*i+1);

    }
    cout << 4*sum;



}
