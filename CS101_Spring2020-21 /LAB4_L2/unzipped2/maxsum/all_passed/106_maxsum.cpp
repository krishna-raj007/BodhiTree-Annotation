#include<simplecpp>

main_program{

	int n;
	float x;
	float sum,answer;
    float i=0;
    float y=0;
    cin>>n;
	repeat(n)
	{
	cin>>x;
	sum=x+i;
	answer=max(sum,y);
    i=x;
    y=answer;
}
cout<<answer;
}
