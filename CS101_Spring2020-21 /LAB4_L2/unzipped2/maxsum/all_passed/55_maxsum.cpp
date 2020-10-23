#include<simplecpp>

main_program{
int n; long int a2=0,a1=0,sum=0,sumn=0;
cin>>n;
repeat(n)
{
    a2=a1;
    sumn=sum;
    cin>>a1;
    sum=a1+a2;
    sum=max(sum,sumn);

}
cout<<sum;
	//Write your code here

}/*6 //n
1 //a1
5 //a2
6 //a3
2 //a4
2 //a5
6 //a6 */

