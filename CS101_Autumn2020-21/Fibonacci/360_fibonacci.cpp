#include<simplecpp>

main_program
{
    int n,k;
    std::cin >> n;
    std::cin >> k;
    int a,b;
    a = 0; b = 1;

    if(n >= 1)
    {
        std::cout << a << '\n';
    }
    if(n >= 2)
    {
        std::cout << b%k << '\n';
    }
    if(n >= 3)
    {
        for(int i = 0;i <(n-2);i++)
        {
            int c;
            c = (a%k) + (b%k);
            a = b;
            b = c;
            std::cout << c%k << '\n';
        }
    }
}
