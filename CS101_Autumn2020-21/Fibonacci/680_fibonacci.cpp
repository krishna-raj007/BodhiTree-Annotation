#include <simplecpp>

main_program {
	long int n, k;
	cin >> n >> k;
	int f0 = 0, f1 = 1, fi;
	if (n == 0) {
		cout << f0%k;
	}
	else if(n == 1) {
		cout << f0%k << endl << f1%k << endl;
	}
	else {
		cout << f0%k << endl << f1%k << endl;
		repeat(n-2) {
			fi = (f0 + f1)%k;
			f0 = f1;
			f1 = fi;
			cout << fi << endl;
		}
	}
}