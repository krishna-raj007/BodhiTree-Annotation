#include<simplecpp>

main_program
{
    int n,k;
    cin>>n>>k;
    int fib[n];
    fib[0]=0;
    cout<<0<<endl;

    fib[1]=1;
    cout<<1<<endl;
    for(int i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        cout<<fib[i]%k<<endl;
    }
}
