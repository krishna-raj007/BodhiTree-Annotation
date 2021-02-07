#include<simplecpp>

main_program
{

long int n, k;
long int a=0, b=1, r;
cin>>n>>k;
if (n==1)
cout<<a;
else
{
    cout<<a<<endl<<b<<endl;
    repeat(n-2)
    {
        r=b;
        b+=a;
        a=r%k;
        b=b%k;
        cout<<b<<endl;
    }
}



}
