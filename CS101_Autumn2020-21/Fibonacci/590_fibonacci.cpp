#include<simplecpp>

main_program{

    long int n, t1 = 0, t2 = 1,k, nextTerm = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        if(i==1)
        {
            cout << t1 <<endl;
            continue;
        }
        if(i==2)
        {
            cout << t2 << endl;
            continue;
        }
        nextTerm = (t1 + t2)%k;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << endl;

    }

}

