#include<simplecpp>

main_program{

	int n;
	double sum=0, x;
	cin>>n;
	for(int i=0;i<=n;i++){
        x=pow(-1,i)/(2*i+1);
        sum=sum+x;}

    cout<<4*sum;

}
