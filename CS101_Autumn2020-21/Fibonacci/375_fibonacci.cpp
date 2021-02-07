#include<simplecpp>

main_program
{
    long long int n, k, a1=0, a2=1;
    cin>>n>>k;
    cout<<a1%k<<"\n";
    cout<<a2%k<<"\n";
    repeat(n-2)
    {
        int a3=a1+a2;
        cout<<a3%k<<"\n";
        a1=a2%k;
        a2=a3%k;
    }
}
