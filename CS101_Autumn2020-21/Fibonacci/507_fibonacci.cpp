#include<simplecpp>

main_program{

    unsigned int n,k;
    cin>>n>>k;
    int f0=0,f1=1,f2,f;
    cout<<f0%k<<endl;
    cout<<f1%k<<endl;
    repeat(n-2)
    {
        f2=f0+f1;
        f=(f0%k + f1%k)%k;
        cout<<f%k<<endl;
        f0=f1;  f1=f2;
    }
}
