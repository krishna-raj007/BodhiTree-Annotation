#include<simplecpp>

main_program{

	int t, n, a, b, x, mx;

	cin>>n;
	cin>>a>>b;
    mx=a+b;
	t=b;

	repeat(n-2){
	    cin>>x;
	    mx=max(mx, t+x);
	    t=x;
	}

	cout<<mx;

}
