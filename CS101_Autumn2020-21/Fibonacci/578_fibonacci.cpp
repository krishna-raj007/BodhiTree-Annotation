#include<simplecpp>

main_program
{
    long int n,k,x=0,y=1,curr;

    cin>>n>>k;
    if (n==1) cout<<0;
    else if (n==2) cout<<0<<endl<<1%k;
    else
    {
    cout<<0<<endl<<1%k<<endl;
    for (int i=0;i<n-2;i++)
    {
        curr=(x+y)%k;
        cout<<curr%k<<"\n";
        x = y%k;
        y = curr%k;
    }

    }

}
