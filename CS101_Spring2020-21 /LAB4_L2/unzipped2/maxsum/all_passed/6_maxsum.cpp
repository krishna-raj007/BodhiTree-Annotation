#include<simplecpp>

main_program
{
    int n;
    long long int a,b,c,max1;
    cin>>n>>a>>b;
    max1 = a+b;
    repeat(n-2)
    {
        cin>>c;
        max1 = max(max1,max(a+b,b+c));
        a=b;b=c;
    }
    cout<<max1;

}
