#include<simplecpp>

main_program{
    long long int n,k,f0=0,f1=1,r,i=3,last,second_last;
    cin>>n>>k;
    last=f1;
    second_last=f0;
    if(n==0)
    {
        cout<<f0%k;
    }
    else if(n==1)
    {
        cout<<f1%k;
    }
    else
    {
        cout<<"0"<<endl<<"1"<<endl;
        while (i<=n)
        {
            r=(last%k+second_last%k)%k;
            second_last=last;
            last=r;
            i++;
            cout<<r%k<<endl;
        }
    }

}
