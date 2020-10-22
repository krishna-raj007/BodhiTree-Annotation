#include<simplecpp>

main_program{
    int queries,N;
    float dist,p1,p2,sum;

	cin>>queries;
	repeat(queries){cin>>N;
	float sum=0;
	repeat(N){
	cin>>p1>>p2;
	sum=sum+(p1-p2)*(p1-p2);}
	dist=sqrt(sum);
	printf("%.2f",dist);
	cout<<endl;}



}
