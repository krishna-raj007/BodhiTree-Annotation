#include<simplecpp>

main_program{

	int f0{0},f1{1},next{1},i{1},n;
	bool found {false};
	cin>>n;
	while(next<=n){
	if(n==next){
	found=true;
	break;
	}
	next=f0+f1;
	f0=f1;
	f1=next;
	i++;
	}
	if(n==1||n==2){
	cout<<1;
	}
	else if(n==0){
	cout<<0;
	}
	else if (found){
	cout<<1;
	}
	else{
	cout<<-1;

	}




}
