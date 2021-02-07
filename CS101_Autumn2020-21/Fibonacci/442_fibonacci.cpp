#include<simplecpp>

main_program
{

    int n,m;
    cin>>n>>m;

    int i,a=0,b=1,c=0;

    cout<<a<<endl<<b<<endl;

    for(i=1; i<=n-2; i++)
    {
        c=(a+b)%m;
        cout<<c<<endl;
        a=b;
        b=c;

    }


}
