#include<simplecpp>

main_program{
    int q, sum, a;
    cin >> q;

    for(int i = 1; i <= q; i++){
        cin >> a;
        sum = 0;
        if(a % 2 == 0) sum++;
        if(a % 3 == 0) sum++;
        if(a % 5 == 0) sum++;
        if(a % 7 == 0) sum++;
        if(a % 11 == 0) sum++;
        cout << sum <<endl;
    }
}
