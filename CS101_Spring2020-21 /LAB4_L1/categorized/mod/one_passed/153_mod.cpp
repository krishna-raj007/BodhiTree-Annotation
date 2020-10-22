#include<simplecpp>

main_program{

	int n=1,m,i=1,r;
	cin>>r>>m;
	repeat(r){

	     n=(n*i)%m;
	     i++;
	     }

	     int q=n,D;

	    D=q%m;
	    cout<<D<<endl;


}
