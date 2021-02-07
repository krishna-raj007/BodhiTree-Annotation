#include<simplecpp>

main_program{
//Write your code here


    int n, t1 = 0, t2 = 1, nextTerm = 0;


    cin >> n;
    1 <= n <= 100000;




    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << t1 << endl;
            continue;
        }
        if(i == 2)
        {
            cout << t2 << endl;
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << endl;
    }
    return 0;
}
