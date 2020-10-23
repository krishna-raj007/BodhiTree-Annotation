#include<simplecpp>

main_program {
    int f0 = 0, f1 = 1, fn = 1, n;
    cin >> n;

    int i = 0;
    while(n >= fn) {
        i++;
        if(n == fn)
            break;

        fn = f1 + f0;
        f0 = f1;
        f1 = fn;
    }

    if(n == fn)
        cout << i;
    else if(n == 0)
        cout << 0;
    else
        cout << -1;
}
