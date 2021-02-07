#include<simplecpp>
main_program
{
    long long int n,k,a,b,c;
    cin>>n>>k;
    a = 0;
    b = 1;
    if (n == 1) cout<<a%k;
    else
    {

        cout<<a%k<<endl<<b%k<<endl;
        for (int m = 3; m <= n; m++)
        {
            c = (a + b)%k;
            cout<<c<<endl;
            a = b;
            b = c;
        }
    }
}
