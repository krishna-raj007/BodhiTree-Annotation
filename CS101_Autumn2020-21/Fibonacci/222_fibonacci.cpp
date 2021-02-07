#include<simplecpp>



main_program
    {
    int x, n, f = 0, s = 1, t;
    cin>>n>>x;
    if (n > 2)
        {
            cout<<0<<endl;
            cout<<1<<endl;
            repeat(n-2)
                {
                    t = f%x + s%x;
                    f = s;
                    s = t;
                    cout<<t%x<<endl;
                }
        }
    if (n == 2)
        {
            cout<<0<<endl;
            cout<<1%x<<endl;
        }
    if (n == 1)
        {
            cout<<0<<endl;
        }
    }
