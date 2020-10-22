#include<simplecpp>

main_program{

	long int n, m, a, i = 2;
	cin >> n >> m;
	a = 1%m;

    repeat(n - 1){
        a = (a * (i % m)) % m;
        i++;
    }
    cout << a;
}
