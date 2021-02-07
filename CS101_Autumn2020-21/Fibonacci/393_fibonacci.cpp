#include<simplecpp>

main_program{
    long long int n,k,a=0,b=1,sum;
    cin >> n >> k;
    cout<<a<<"\n"<<b<<"\n";
    for(long long int i=3;i<=n;i++)
    {
        sum = (a+b)%k;
        if(i!=n) cout <<sum%k<<"\n";
        else cout <<sum%k;
        a=b;
        b=sum;
    }
}
