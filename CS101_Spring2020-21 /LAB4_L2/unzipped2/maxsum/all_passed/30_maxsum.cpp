#include<simplecpp>

main_program
{
    int n;
    int mx=0,sum=0,a,t=0;
    cin >> n;
    repeat (n)
    {
        cin >> a;
        sum = a + t;
        mx = max(sum,mx);
        t=a;
    }
    cout << mx;
}
