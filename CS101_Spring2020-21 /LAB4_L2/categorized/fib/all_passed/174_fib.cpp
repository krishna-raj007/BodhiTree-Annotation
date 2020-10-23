#include<simplecpp>

main_program{

	int n;
	int t1=1,t2=1,sum=0,ans=0;
	cin>>n;

	int i=3;
	repeat(n)
	{
	  sum=t1+t2;
	  t1=t2;
	  t2=sum;
	  if(t1==n)
	  {
	    ans=i;
	    break;
	  }
	  else
	  {
	    ans=-1;
	  }
	  i++;
	}
	if(n==0)
    {
        ans=0;
    }
    if(n==1)
    {
        ans=1;
    }
	cout<<ans;

}
