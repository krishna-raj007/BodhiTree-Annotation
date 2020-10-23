#include<simplecpp>

main_program{

	long double n,sum=1,p;
	int q=1;
	cin>>n;
	while(n>0)
    {
        if(q%2==0)
            p=1.0/((2*q)+1);
        else
            p=-1.0/((2*q)+1);
        q=q+1;
        sum=sum+p;
        n=n-1;

        ;
    }
     cout<<4*(sum);
}
