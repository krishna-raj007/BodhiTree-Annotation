#include<simplecpp>

main_program{

	//Write your code here
	int n,res=1,a=0,b=1,temp;
	cin>>n;
	//Fibonacci generator
	if(n==0)cout<<0;
	else if(n==1) cout<<1;
	else{
        while(n>b){
            temp = b;
            b = a+b;
            a=temp;
            res++;
        }
        if(n==b)cout << res;
        else cout << -1;
	}

}
