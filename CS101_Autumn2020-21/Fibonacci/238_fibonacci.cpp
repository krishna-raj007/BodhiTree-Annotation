#include<simplecpp>

main_program{
    unsigned long long int t,t1,t2,n,k,r;
    cin>>n>>k;
    t=0;
    t1=1;
    if(n>=2){
    cout<<t%k<<endl;
    cout<<t1%k<<endl;
    repeat(n-2){
        t2=t1+t;
        r=t2%k;
        t=t1;
        t1=t2;
        cout<<r<<endl;
    }
    }
    else cout<<t%k;
}
