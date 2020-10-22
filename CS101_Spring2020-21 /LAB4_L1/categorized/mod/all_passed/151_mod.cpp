#include<simplecpp>

main_program{
    int n,i=1;
    long long int m,ans=1;
    cin>>n>>m;
    repeat(n)
    {

    ans=((ans%m)*(i%m))%m;

    i++;
    }
    cout<<ans;

}
