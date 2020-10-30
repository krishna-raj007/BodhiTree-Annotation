#include<simplecpp>

main_program{

	//Write your code here
	long int n,m,i=1,f=1;
	cin >> n >> m;
	repeat(n){
		cout<<f<<" "<<i<<" "<<m<<" "<<n<<endl;
	  f = (f*i)%m;
	  i++;
	  }
    cout << f<< endl;

}
