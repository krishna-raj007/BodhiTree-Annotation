#include<simplecpp>

main_program{

	int q;
	long long int a,b;
	cin>>q;
	cin>>a>>b;
	long long int neww,maxi,sum;
	maxi=(a+b);
	repeat(q-2)
	{
        cin>>neww;
        sum=(neww+b);
        if(maxi<sum)
        {
            maxi=sum;
            }
        b=neww;
        }
        cout<<maxi;

}
