#include<simplecpp>

main_program{

	//Write your code here
int n,maxsum=0,a,b,c=1;
cin>>n;
cin>>a>>b;
repeat(n-1)
{
    if(maxsum<=(a+b))
        maxsum=a+b;
        a=b;
if(c<=n-2)
        {cin>>b;}
        c++;


}
cout<<maxsum;
}

