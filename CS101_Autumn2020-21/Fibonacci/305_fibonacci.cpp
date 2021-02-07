#include<simplecpp>

main_program{
    int n,k;
    cin>>n>>k;
    long long int t0=0,t1=1,t;
    if(k>1&&k<=100000){
        cout<<t0%k<<endl;
        cout<<t1%k<<endl;
    }
    repeat(n-2){
    if(n<3||n>100000||k<=1||k>100000) break;
        if(t>2000000000){
            t0 = t0%k;
            t1 = t1%k;
        }
        t = t0 + t1;
        cout<<t%k<<endl;
        t0 = t1;
        t1 = t;
    }
}

