#include<simplecpp>

main_program
{
    int k,n;
    cin>>n>>k;
    long f0=0%k;
    long f1=1%k;
    cout<<f0%k<<endl;
    long f2=0%k;
    for(int i=1;i<n;i++)
    {
        if(i==1)
        {
            cout<<f1<<endl;
            continue;
        }
        f2=(f1+f0)%k;
        cout<<f2<<endl;
        f0=f1;
        f1=f2;
    }
}

