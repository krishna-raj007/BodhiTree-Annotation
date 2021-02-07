
#include<simplecpp>
main_program
{   long long int n, k, t1 = 0, t2 = 1, nextTerm;
    cin >>n>>k;

    for (int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {cout << t1%k <<endl;
        continue;}

        if(i == 2)
        {cout << t2%k <<endl;
        continue;}
        nextTerm = t1 + t2;

        cout << nextTerm%k << endl;
        t1 = t2;
        t2 = nextTerm;
    }
}
