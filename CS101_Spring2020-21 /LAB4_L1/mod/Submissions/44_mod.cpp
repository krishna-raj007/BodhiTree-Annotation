#include<simplecpp>
main_program
{
    int n,m;
	cin>>n>>m;
	long int p=1;
	for(int i=1;i<=n;i++)
    {
        p=p*i;
        p=p%m;
    }
    long int x=p;
    cout<<p;
}
