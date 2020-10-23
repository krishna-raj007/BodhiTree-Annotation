#include<simplecpp>

main_program
{
    int n,a,b,sum,l;
    cin >> n >> a >> b;
    sum=abs(a+b);
    l=sum;
    repeat(n-2)
    {
        cin >> a;
        sum=abs(a+b);
        b=a;
        l=max(l,sum);
    }
    cout << l;


}
