#include<simplecpp>

main_program{
  long long int n, t1 = 0, t2 = 1, nextTerm = 0, k;


    cin >> n >> k;


    for (int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cout << endl << t1%k;
            continue;
        }
        if(i == 2)
        {
            cout << endl << t2%k;
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << endl << nextTerm%k;
    }

}
