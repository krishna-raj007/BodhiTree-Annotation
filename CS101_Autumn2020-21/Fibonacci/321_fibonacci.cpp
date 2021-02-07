//This program prints the first n Fibonacci numbers modulo k
#include<simplecpp>
main_program
{
    unsigned long long int n,k, f1=0,f2=1,f3=0;//f1,f2 and f3 are three successive terms of the sequence
    cin >> n >> k;
    if(1<=n && n<=100000 && 1<k && k<=100000)
    {
        cout << f1%k << endl;
        cout << f2%k << endl;
        repeat(n-2)
        {
            f3=f2+f1;//Each term equals the sum of preceding terms
            cout << (f1%k + f2%k)%k << endl;
            f1=f2;
            f2=f3;
        }
    }
}



