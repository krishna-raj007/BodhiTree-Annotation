#include<simplecpp>

main_program{
int i=1;
long int r,j=1,k=1,n,m;
cin>>n>>m;
repeat(n)
{
        j=((j%m)*(i%m))%m;
        i++;
        }
cout<<j;
	//Write your code here

}
