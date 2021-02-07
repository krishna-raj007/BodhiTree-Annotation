#include<simplecpp>

main_program
{
    long long int n,k,i,a1=0,a2=1,a3;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cout<<a1%k<<endl;
        a3=(a1+a2)%k;
        a1=a2%k;
        a2=a3%k;
    }
}
