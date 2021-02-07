#include<simplecpp>

main_program{
    int f0=0,f1=1,n,k,fn,i;
    cin>>n>>k;
    cout<<f0<<endl;
    cout<<f1<<endl;
    repeat(n-2){
    fn=f1+f0;
    i=fn\k;
    cout<<i<<endl;

    f0=f1;
    f1=fn;
    }
