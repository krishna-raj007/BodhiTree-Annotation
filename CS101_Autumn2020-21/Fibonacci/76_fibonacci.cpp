#include<simplecpp>

main_program{
    int f0 = 0, f1 = 1, t;
    int n, k;
    cin>>n>>k;

    if(n>=2){
        n-=2;
        cout<<f0<<"\n"<<f1<<endl;
        repeat(n){
            t=f0+f1;
            t%=k;
            f0=f1;
            f1=t;
            cout<<t<<endl;
        }
    }
    else if(n==1){
        cout<<f0;
    }
}
