#include<simplecpp>

main_program{
    int n,k;
    cin>>n>>k;
    long long int f0=0;
    long long int f1=1;
    long long int f2=0;
    cout<<f0%k<<endl;
    if (n>1)cout<<f1%k<<endl;
    for(int i=3;i<=n;i++){
        f2=f0%k+f1%k;
        f0=f1;
        f1=f2;
        int a=f2%k;
        cout<<a<<endl;
    }

}
