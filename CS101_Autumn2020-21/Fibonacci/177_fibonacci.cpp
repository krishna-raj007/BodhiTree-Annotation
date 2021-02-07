#include<simplecpp>

main_program{
//
   unsigned long long int n, t1 = 0, t2 = 1, g= 0,k;
    cin >> n>>k;

    for (unsigned long long int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cout<< t1<<endl;
            continue;
        }
        if(i == 2)
        {
            cout << t2 <<endl;
            continue;
        }
        g = t1 + t2;
        t1 = t2;
        t2 = g;

        cout << g%k<<endl;
    }

}
