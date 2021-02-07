#include <simplecpp>

main_program{
	long long int fold=0, fnew=1, s, n, k;
	cin >> n;
	cin >> k;
	cout << fold << endl;
	cout << fnew << endl;
	for(int i = 3; i <= n; i++){
		s = (fold + fnew) % k;
		cout << s << endl;
		fold = fnew;
		fnew = s;
	}
}		
	