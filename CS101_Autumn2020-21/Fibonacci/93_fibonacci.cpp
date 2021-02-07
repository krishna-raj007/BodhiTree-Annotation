#include<simplecpp>

main_program{

    unsigned long long int a=0, b=1, c, d, n, k, x=1;
    cin>>n>>k;

    cout<<a%k<<endl;
    cout<<b%k<<endl;


    repeat(n-2){

    c=a%k;
    d=b%k;
    x= (c + d)%k;

    a=b;
    b=x;

    cout<<x<<endl;

    }




}
