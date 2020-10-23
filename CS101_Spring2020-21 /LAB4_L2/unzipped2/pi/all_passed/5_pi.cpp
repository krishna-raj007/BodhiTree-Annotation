#include<simplecpp>

main_program{

	//Write your code here
int n,i=1;
double pi,sum=0;
cin>>n;
repeat(n){
sum= sum+(pow(-1,i)*1/(2*i+1));
i=i+1;
}
pi=4*(1+sum);
cout<<pi<<endl;
}
