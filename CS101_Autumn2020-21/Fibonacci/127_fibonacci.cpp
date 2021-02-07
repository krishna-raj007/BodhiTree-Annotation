#include<simplecpp>

main_program{
    int n, t1 = 0, t2 = 1, nextTerm = 0, k;
    cin >>n>>k;
    for (int i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            cout << t1%k<< endl;
            continue;
        }
        if(i == 2)
        {
            cout << t2%k << " "<<endl;
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm%k << " "<<endl;
    }
}
