#include<simplecpp>

main_program{

int i=3;
int n,ans;
double answer;

cin>>n;

repeat(n)
{
    answer=4*(1+pow(-1,n)*1/i)*1.0;
    i++;
    i<=n;
}

	cout<<answer<<endl;//Write your code here

}
