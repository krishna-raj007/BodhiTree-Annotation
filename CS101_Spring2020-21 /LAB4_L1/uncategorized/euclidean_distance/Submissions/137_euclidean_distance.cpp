#include<simplecpp>

main_program
{
	int q,n;
	float a,b,d;
	cin>>q;
	repeat(q)
	{
	    d=0;
	    cin>>n;
	    repeat(n)
	    {
	        cin>>a;
            cin>>b;
	        d=d+((b-a)*(b-a));
	    }
	    d=sqrt(d);
	    printf("%.2f\n",d);
    }
}
