#include<simplecpp>

main_program{

	int n,x,fib;
	fib(0)=0;
	fib(1)=1;
	cin>>n;
	if (n>=2){
        repeat(n-2){
            x=2;
            fib(x)=fib(x-1)+fib(x-2);

        }
        cout<<x;
	}

}
