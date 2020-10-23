#include<simplecpp>

main_program{

	//Write your code here
	bool fibfound = false;
	int fib0 = 0, fib1 = 1, counter = 2;
	long long int fib = 0;
	long long int n ; cin>>n;
	if (n==0){
        counter = 0;
        fibfound = true;
        fib = 1;
	}

	while (n >= fib){
        fib = fib0 + fib1;
        fib0 = fib1;
        fib1 = fib;

        if ((n==1)){counter=1; fibfound=true; break;}
        if (n==fib){
        fibfound = true;
        break;
        }
        counter ++;


	}
	if (fibfound) cout<<counter;
    else cout<<"-1";
}
