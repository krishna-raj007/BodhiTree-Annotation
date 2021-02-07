#include <simplecpp>
using namespace std;

int main()
{
    int t1 = 0, t2 = 1, nextTerm = 0, n, k, i;


    cin >> n >> k;

    // displays the first two terms which is always 0 and 1
    cout << (t1%k) << "\n" << (t2%k) << "\n";

    nextTerm = t1 + t2;

    for(i=0;i< n-2;i++)
    {
        cout << (nextTerm%k) << "\n";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}
