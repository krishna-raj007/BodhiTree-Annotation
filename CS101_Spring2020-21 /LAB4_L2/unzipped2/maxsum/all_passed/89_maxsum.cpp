#include<simplecpp>

main_program
{
    int n;
    long long int d,Max,sum,a;
    Max=0;d=0;

    cin>>n;

    dotimes(n)
    {
        cin>>a;
        sum=a+d;
        Max=max(sum,Max);
        d=a;

    }
    cout<<Max;

}
