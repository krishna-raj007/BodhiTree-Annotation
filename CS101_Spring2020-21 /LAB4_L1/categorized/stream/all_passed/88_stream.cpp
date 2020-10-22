#include <simplecpp>

main_program{
    int n,a;
    cin >> n;
    while (a!=-1){
        cin >> a;
        n = max(n,a);
    }
    cout << n;
}
