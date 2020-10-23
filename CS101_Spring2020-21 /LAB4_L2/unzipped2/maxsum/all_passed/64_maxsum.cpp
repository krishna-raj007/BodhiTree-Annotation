#include<simplecpp>

main_program{
long int n,a,b,sum,sum1,maxx=0;
	cin>>n;
	sum=0;
	b=0;
	repeat(n)
      {  sum1=maxx;
        cin>>a;
        sum=b+a;

        b=a;
        maxx=max(sum,sum1);
}
cout<<maxx;
}
