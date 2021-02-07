#include<simplecpp>
 int fibo(int n,int k)
{
    int f=0,t=1,term=0;
    int b=0;
    for(int i=1; i<n; i++)
    {
        int z=term;
        term=(t+f);
        f=z%k;
        t=term%k;
        b=term%k;
    }
    return b;
}

main_program
{
    int n,k;
    cin >> n >> k;
    for(int i=1; i<=n; i++)
    {
    cout << fibo(i,k)%k <<endl;
    }
}
