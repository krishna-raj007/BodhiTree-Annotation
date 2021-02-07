#include<simplecpp>

main_program{
    int a,b,k,n;
    cin>>n>>k;
    a=0;
    b=1%k;
    cout<<a<<"\n";
    if (n>1) cout<<b<<"\n";
    for(int i=3;i<=n;i++){
        int dummy=a;
        a=b;
        b=(b+dummy)%k;
        cout<<b<<"\n";
    }
}
