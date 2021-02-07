#include<simplecpp>

main_program{
    long long int n,k,m,a0=0,a1=1;
    int i=1;
    cin>>n>>k;
    cout<<"0"<<endl<<1<<endl;
    while(i<=n-2){
        m=(a0%k+a1%k);
        cout<<(a0%k+a1%k)%k<<endl ;
        a0=a1%k;a1=m;
        i=i+1;

    }



}
