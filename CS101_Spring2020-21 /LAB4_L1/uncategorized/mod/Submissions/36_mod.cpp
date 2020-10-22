#include<simplecpp>

main_program{
long int n;
long int m;
long int i=1;
long int fact=1;

cin>>n;
cin>>m;
repeat(n){
fact=fact*i;
fact=fact%m;
i=i+1;

}


cout<<fact;

	//Write your code here

}
