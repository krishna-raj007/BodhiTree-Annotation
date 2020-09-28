#include<simplecpp>

main_program{

	long int n,m;
    n<=10^5 , m<= 10^9;
	cin >> n>> m;
	long int product = 1 ;
	int i=1;

  repeat (n){
        product = ((product%m) * (i %m))%m;
        i++;
	}
cout << product;

}
