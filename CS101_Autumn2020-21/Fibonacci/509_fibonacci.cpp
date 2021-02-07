
#include <simplecpp>


void Fibonacci(long long int n, long long int k)
{
    long long int f1 = 0, f2 = 1, i;

    if (n < 1)
        return;
    cout << f1%k << "\n";
    for (i = 1; i < n; i++) {
        cout << f2%k << "\n";
        long long int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}

int main()
{
      long long int n,k;
      cin>>n>>k;
    Fibonacci(n,k);
}
