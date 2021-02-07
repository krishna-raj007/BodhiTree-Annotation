#include<simplecpp>

main_program
{
long long int n,k,a,b,d;
cin>>n>>k;
a=0;
b=1;
cout<<a%k<<"\n";
cout<<b%k<<"\n";
repeat(n-2)
    {
    d=(a%k)+(b%k);
    cout<<d%k<<"\n";
    a=b;
    b=d;
    }
}
