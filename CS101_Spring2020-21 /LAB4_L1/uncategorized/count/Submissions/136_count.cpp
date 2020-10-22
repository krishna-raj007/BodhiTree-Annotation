#include<simplecpp>

main_program
{
	int q,a,n=0;
	cin>>q;
	repeat(q)
	{
	    cin>>a;
	    if((a%2)==0)
            n++;
        if((a%3)==0)
            n++;
        if((a%5)==0)
            n++;
        if((a%7)==0)
            n++;
        if((a%11)==0)
            n++;
        cout<<n;
    }
}
