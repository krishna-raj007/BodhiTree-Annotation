#include<simplecpp>

main_program
{

    long int n;
    long int k ;
    cin >> n >> k;
    int a = 1;
    int b = 0;
    int x;
    cout<< b%k<<"\n";
    cout << a%k<<"\n";
    repeat(n-2)
    {
//int a = 0;
//int b = 1;
        long int c = a + b;
        //x = a;

        b = a%k;
        a = c%k;
        cout << c%k<<"\n";


    }
}
