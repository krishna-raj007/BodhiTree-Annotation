#include<simplecpp>

main_program{
{
    int n, x = 0, y = 1, temp = 0, k;

    cin >> n;
    cin>>k;

    for (int i = 1; i <= n; ++i){
        if(i == 1)
        {
            cout << " " << x<<" ";
            continue;
        }
        if(i == 2)
        {
            cout << y << " ";
            continue;
        }
        temp = (x + y) % k;
        x = y;
        y = temp;

        cout << temp%k << " ";
    }
}
}
