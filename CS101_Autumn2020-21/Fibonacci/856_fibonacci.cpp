#include<simplecpp>

main_program{

    long long int n,k;

    cin>>n>>k;

    long long int a=0;
    long long int b=1;
    long long int c;

    cout<<a<<endl;
    cout<<b<<endl;

    for(long long int i=2;i<n;i++){

        c=(a+b)%k;

        cout<<c<<endl;

        a=b;
        b=c;
    }

}
