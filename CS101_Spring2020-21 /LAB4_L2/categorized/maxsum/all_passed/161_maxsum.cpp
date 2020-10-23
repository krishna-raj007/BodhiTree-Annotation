#include<simplecpp>

main_program{

	int a,b,c=0,n;

	cin>>n>>a;

	repeat(n-1){

	    cin>>b;

	    if(c<a+b){

            c=a+b;
            a=b;
	    }


	}

	cout<<c;
}
