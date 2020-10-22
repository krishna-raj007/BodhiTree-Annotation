#include<simplecpp>

main_program{

	long int n,m, k=1;
	cin >> n >> m;
	int i = 1;
	for(;i<=n;i++)
	{
	  k=k*i;
	  k=k%m;
	}
   cout << k;
}
