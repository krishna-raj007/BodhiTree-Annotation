#include<simplecpp>
main_program{
    long long int n, k,f0,f1,f;

    cin>>n>>k;

    f0=0;
    f1=1;
    cout<<f0<<endl<<f1<<endl;
    for(int i=1;i<=n-2;i++) {
        cout<<(f0+f1)%k<<endl;
        f=f1;
        f1=(f0+f1)%k;
        f0=f;
    }
}
