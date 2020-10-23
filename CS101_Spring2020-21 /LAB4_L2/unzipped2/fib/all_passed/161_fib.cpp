#include<simplecpp>

main_program{

	int n,val=1;
	int x,y,z;
	x=0;
	y=1;
	int i=0;
	cin>>n;
	if(n==0)
        val=3;
	else if(n==1)
        val=2;
	while(i+1)
	{
	if(i%3==0)
	{
	z=x+y;
	if(z==n)
	{val=0;
	break;}
	else if(z>n)
	break;
	}
	else if(i%3==1)
	{
	x=y+z;
	if(x==n)
	{val=0;
	break;}
	else if(x>n)
	break;
	}
	else if(i%3==2)
	{
	y=x+z;
	if(y==n)
	{val=0;
	break;}
	else if(y>n)
	break;
	}
	i++;
	}
	if(val==0)
        cout<<i+2;
    else if(val==2)
    cout<<"1";
    else if(val==3)
    cout<<i;
    else
        cout<<"-1";
	}


