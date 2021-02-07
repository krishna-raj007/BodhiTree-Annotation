#include <simplecpp>

main_program{
	long long int n,k;
	cin >> n >> k;
	long  long int f0=0,f1=1,s=1,q=f1,w=f0;
	cout << 0 << endl;

	repeat(n-1){

	cout << s%k << endl ;
	s=((q%k)+(w%k))%k;

	w=q;
	q=s;
	
	}
}