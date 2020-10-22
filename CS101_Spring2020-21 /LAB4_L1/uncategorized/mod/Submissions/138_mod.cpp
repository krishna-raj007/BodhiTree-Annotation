#include<simplecpp>

main_program
{
	int n,m,ans=1;
	cin>>n;
    cin>>m;

    for(int i=1;i<=n;i++)
    {
        ans=ans*(i%m);
        ans=ans%m;
    }
    cout<<ans;
}
