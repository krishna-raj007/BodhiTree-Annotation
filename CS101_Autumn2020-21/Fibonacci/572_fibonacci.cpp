#include<simplecpp>

main_program
{
    int f = 0, s = 1, n, k;
    cin>>n>>k;
    for (int i = 1 ; i<=n ; i++)
    {
        cout<<f%k<<endl;
        int temp = (f + s)%k;
        f = s; s = temp;
    }
}
