#include<simplecpp>


main_program{
    long int n,k,f1=1,f0=0,dummy,mod;
    cin>>n>>k;
    mod=f0%k;
    cout<<mod<<"\n";
    mod=f1%k;
    cout<<mod<<"\n";
    while(n>2){
        dummy=f1;
        f1=(f1%k)+(f0%k);
        f0=dummy;
        mod=f1%k;
        cout<<mod<<"\n";
        n-=1;
    }
}
