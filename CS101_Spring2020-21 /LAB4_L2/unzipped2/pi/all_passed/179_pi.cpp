#include<simplecpp>

main_program{

	//Write your code here
	int n;
	double ans=0;
	cin>>n;
	while(n>=0){
        ans += (pow(-1,n)*1.0)/(n*2 + 1);
        n--;
	}
	cout<<ans*4;

}
