#include<simplecpp>

main_program{
    int n,k;
    cin>>n>>k;
    int a=0,b=1;
    if(n%2==0){
        for(int i=1;i<=n/2;i++){
            cout<<a<<endl<<b<<endl;
            a=(a+b)%k;
            b=(a+b)%k;
        }
    }
    else {
        cout<<0<<endl;
        a=1;b=1;
        for(int i=1;i<=(n-1)/2;i++){
            cout<<a<<endl<<b<<endl;
            a=(a+b)%k;
            b=(a+b)%k;
        }
    }
}
