#include <simplecpp>
main_program
{
    long n, k;
    cin>>n>>k;
    long long a=1,b=-1,t=0;
    for(long i=1;i<=n;i++)
    {
        t=(a%k+b%k)%k;
        b=a;
        a=t;
        cout<<t<<endl;
    }
}
