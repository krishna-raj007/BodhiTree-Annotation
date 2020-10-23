#include<simplecpp>

main_program{

	int a=1,b=0,n,x=1,c=0;
	cin>>n;
	if(n==0){
        cout<<0;
	}
	else{
	while(c<n){
	c=a+b;
	b=a;
	a=c;
    x=x+1;
	}
	if(c==n){
	cout<<x;
	}
    else{
    cout<<"-1";
    }
	}
}
