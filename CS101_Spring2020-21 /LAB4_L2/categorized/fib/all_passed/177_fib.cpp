#include<simplecpp>

main_program{

    long int n;
    long int a1=0,a2=1,i=2,a3,ans=-1;

	cin>>n;

	if(n==0)
        ans=0;
    else if(n==1)
        ans=1;

	else
        repeat(n)
	{
	    a3=a2+a1;
	    a1=a2;
	    a2=a3;
	    if(n==a3)
        {
          ans=i;
        }
        i++;
	}

	cout<<ans;
}
