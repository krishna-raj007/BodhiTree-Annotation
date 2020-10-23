#include<simplecpp>

main_program{
    int n;
    cin>>n;
    long int a, b, maxi;
    cin>>a;
    maxi = a;
    repeat(n-1)
    {
        cin>>b;
        maxi = max(maxi, a+b);
        a = b;
    }
    cout<<maxi;
}
