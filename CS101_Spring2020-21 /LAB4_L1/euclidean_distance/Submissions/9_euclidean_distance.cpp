#include<simplecpp>

main_program{

	//Write your code here
	int q,n; float a,b,s=0,t;
	cin>>q;
	while(q>0){
            cin>>n;
    while(n>0){
	     cin>>a>>b;
	s=(a-b)*(a-b)+s;
	n--;}
	t=sqrt(s);
	printf("%.2f\n",t);
	q--;s=0;}
	}
