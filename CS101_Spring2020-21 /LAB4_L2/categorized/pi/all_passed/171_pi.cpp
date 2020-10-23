#include<simplecpp>

main_program{

	int n , i,T;
	cin>>n;
	double r ; r=1;
T=1 ; i=1;
repeat(n){
int newT; newT = T+2;
if(i%2==0) r=r+(1.0/newT);
else r=r-(1.0/newT);
i++;
T=newT;
}
double answer; answer=4.0*r;
cout<<answer<<endl;

}
