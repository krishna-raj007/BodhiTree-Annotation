#include<simplecpp>
main_program{
    long long int n,k;
    cin>>n>>k;
    long long int i,mod;
    long long int f3,f1=0,f2=1;
    cout<<f1%k<<endl<<f2%k<<endl;
    for(i=0;i<n-2;i++){
        f3=f1+f2;
        mod=f3%k;
        cout<<mod<<endl;
        f1=f2;
        f2=f3;
    }
}
