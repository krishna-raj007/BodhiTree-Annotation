#include <simplecpp>
using namespace std;

long long getRemainder(long long num, long long divisor) 
{     

    if (divisor == 0) { 
        cout << "Error: divisor can't be zero \n"; 
        return -1; 
    } 
  

    if (divisor < 0) 
        divisor = -divisor; 
    if (num < 0) 
        num = -num; 
  

    long long i = 1; 
    long long product = 0; 
    while (product <= num) { 
        product = divisor * i; 
        i++; 
    } 
    return num - (product - divisor); 
} 

void printFibonacciNumbers(long long n, long long k)
{
    long long f1 = 0, f2 = 1, i;

    if (n < 1)
        return;
    cout << getRemainder(f1, k) << endl;
    for (long long i = 1; i < n; i++) {
        cout << getRemainder(f2, k)<< endl;
        long long next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}

main_program{
    long long n, k;
    cin >> n >> k;
    printFibonacciNumbers(n, k);
    return 0;
}