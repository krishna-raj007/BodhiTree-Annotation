#include<simplecpp>

main_program
{
    int a=0,b=1,c;
    int n,k;
    cin>>n>>k;
    cout<<0<<"\n"<<1<<"\n";
    for(int i=1;i<=(n-2);i++)
    {
        c=a%k+b%k;
        cout<<c%k<<endl;
        a=b;
        b=c;
    }

}
