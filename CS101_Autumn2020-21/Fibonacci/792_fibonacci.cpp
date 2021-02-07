#include <simplecpp>

main_program {
	unsigned int f_prev = 0;
	unsigned int f_curr = 1;
	unsigned int f_next = 1;

	int n, k;
	cin >> n;
	cin >> k;

	cout << 0 << endl;
	cout << f_curr % k << endl;
	cout << f_next % k << endl;

	for (int i = 0; i < n - 3; i++) {
		int temp1 = f_next;
		int temp2 = f_curr;
		f_curr = temp1;
		f_prev = temp2;	
		f_next = (f_curr + f_prev) % k;
		cout << f_next << endl;
	}
}

