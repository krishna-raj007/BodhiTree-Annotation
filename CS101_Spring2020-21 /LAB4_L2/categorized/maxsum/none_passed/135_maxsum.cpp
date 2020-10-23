#include<simplecpp>

main_program{
    int n ,t,i=0 ;
    double answer=0 ;
    cin>>n;
    repeat(n){
    t=2*i+1 ;
    answer=answer+pow(-1,i)/t;
    i++;



    }

	cout<<4*answer;//Write your code here

}
