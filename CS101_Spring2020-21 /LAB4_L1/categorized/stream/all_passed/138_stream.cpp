#include<simplecpp>

main_program
{
	int n,l=0;
	do
    {
        cin>>n;
        l=max(n,l);
    }while(n>0);

	cout<<l;

}
