#include<simplecpp>
using namespace std;

main_program{
    long long n, t1 = 0, t2 = 1, term = 0,k;
    cin >> n>>k;

    for (int i = 1; i <= n; i++)
    {
        
        if(i == 1)
        {
            cout << t1<<endl;
            continue;
        }
        if(i == 2)
        {
            cout << t2<<endl;
            continue;
        }
        term = t1 + t2;      
        t1 = t2;            
        t2 = term;
        
        cout << term%k<< endl;
    }
   
}