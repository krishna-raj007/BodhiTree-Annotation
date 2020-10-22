    #include <iostream>
    using namespace std;
    int main()
    {
        long int n, m;
        long factorial = 1;
        cin >> n >> m;
        for(int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        cout << factorial%m;
        return 0;
    }
