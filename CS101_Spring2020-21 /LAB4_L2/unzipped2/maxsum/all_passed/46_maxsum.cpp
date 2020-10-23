#include<simplecpp>

main_program{

    int n; cin >> n;
    int a,b; cin >> a >> b;
    int maximum = b+a;
    repeat(n-2) {
        int c; cin >> c;
        int sum = b+c;
        maximum = max(maximum,sum);
        b=c;
    }
    cout << maximum;

}
