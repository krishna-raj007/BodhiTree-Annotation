#include<simplecpp>

main_program{

	int n=1,m,i=1,r;
	cin>>r>>m;
	repeat(r){

	     n=(n*i)%m;
	cout<<n<<" "<<m<<" "<<i<<" "<<r<<endl;
	     i++;
cout<<n<<" "<<m<<" "<<i<<" "<<r<<endl;
	     }

	     int q=n,D;
cout<<n<<" "<<m<<" "<<i<<" "<<r<<" "<<D<<" "<<q<<endl;

	    D=q%m;
	    cout<<D<<endl;


}
