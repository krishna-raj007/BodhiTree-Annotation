#include<simplecpp>

main_program{
    long long int i2=1,t,i1=0,k,n;
    cin>>n>>k;
    if(n>=1 && n<=10e5 && k>1 && k<=10e5 )
    cout<<i1<<endl;
    {for(int i=2;i<=n;i++)
        {
            t=(i1+i2)%k;
            i2=i1;
            i1=t;
            cout<<t<<endl;
        }
    }
}
