#include <simplecpp>

main_program{
	int n,k,ta=0,tb=1,c,i;
	cin >> n >> k;
	if(n>=1)
		cout << ta%k << endl;
	if(n>=2)
		cout << tb%k << endl;
	for(i=3;i<=n;i++){
		c=tb%k;
		tb = ta%k + tb%k;
		ta=c;
		cout << tb%k << endl;
	}
}