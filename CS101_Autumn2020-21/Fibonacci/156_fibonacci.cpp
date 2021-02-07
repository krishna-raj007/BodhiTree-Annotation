#include<simplecpp>

main_program{
    int n,k,f1=0,f2=1;
    cin>>n>>k;
    cout<<f1%k<<endl<<f2%k<<endl;
    repeat(n-2){
        int nf1=f2;
        f2=f1%k+f2%k;
        f1=nf1;
        cout<<f2%k<<endl;
    }
}
