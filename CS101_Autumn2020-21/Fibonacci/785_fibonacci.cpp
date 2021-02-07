#include<simplecpp>

main_program{
long int f1=0;
long int f2=1;
int n,k;
cin>>n>>k;
cout<<(f1%k)<<endl<<(f2%k)<<endl;
repeat(n-2)
    {
            long int ans=((f1%k)+(f2%k))%k;
            cout<<ans<<endl;
            long int temp=f2;
            f2=ans;
            f1=temp;
    }
}
