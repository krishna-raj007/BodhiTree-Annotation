#include<simplecpp>
main_program
{
    long int n,k;
    cin>>n>>k;
    long int first=0;
    cout<<first%k<<"\n";
    long int second=1;
    for(long int i=2;i<=n;i++)
    {
        second=second%k;
        cout<<second<<"\n";
        second+=first;
        first=second-first;
    }
}
