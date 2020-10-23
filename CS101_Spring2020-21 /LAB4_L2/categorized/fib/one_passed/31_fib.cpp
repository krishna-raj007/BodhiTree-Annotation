#include<simplecpp>

main_program
{
    long long int n;
    int fib = 2, count = 3, a = 2, b = 1;
    cin >> n;


{
   if( n == 0)
    {
        cout << 0;
    }
    else if( n == 1)
    {
        cout << 1;
    }
    else {
        while( n >= fib)
        {
            if( n == fib)
            {
             cout << count;
            }
            else
            {
                count++;
                fib = a + b;
                b = a;
                a = fib;
            }
        }
    }
}
}





