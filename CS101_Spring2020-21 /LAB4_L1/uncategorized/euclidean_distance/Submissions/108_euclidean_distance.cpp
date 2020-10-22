#include<simplecpp>

main_program{

	int Q,n;
	float a,b,edsqr,ed;
	cin>>Q;
	repeat(Q)
	{ edsqr=0;
	    cin>>n;
	    repeat(n)
	    {
	        cin>>a>>b;
	        edsqr=edsqr+(a-b)*(a-b);
	    }
	    ed=sqrt(edsqr);
	    printf("%.2f\n",ed);
	}



}
