#include <simplecpp>


main_program{

	int n, k;
	cin >> n >> k;

	long long int a = 0; long long int b = 1;

	cout << a%k << endl;
	cout << b%k << endl;

	for(long int i = 0; i < n-2; i++){

		long long int c = (a + b)%k;
		a=b%k;
		b=c%k;
		cout << c%k<<endl;

	}


}
