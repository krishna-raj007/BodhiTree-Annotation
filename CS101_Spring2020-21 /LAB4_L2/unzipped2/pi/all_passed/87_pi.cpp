#include<simplecpp>


main_program{

	//Write your code here
	int n;
	double t,s=0;
	cin >> n;

	for(int i=0;i<=n;i++){
	t=(pow(-1,i))*1.0/(2*i+1);
	s=s+t;
	}

	double a=s*4;
cout<<a;


}
