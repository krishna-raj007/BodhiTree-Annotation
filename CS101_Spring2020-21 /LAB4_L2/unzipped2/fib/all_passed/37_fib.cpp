#include<simplecpp>

main_program{

	int fib0{0},fib1{1},next{1},i{1},n;
	bool get{false};
	cin>>n;
	while(next <= n){

	if (n == next){
	get=true;
	break;



	}
	next=fib0 + fib1;
	fib0=fib1;
	fib1=next;
	i++;





	}
	if(n == 1){
	cout<<1;
	}
	else if(n == 0){
	cout<<0;
	}
	else if(get){
	cout<<i;
	}
	else{
	 cout<<-1;
	}

	}

















