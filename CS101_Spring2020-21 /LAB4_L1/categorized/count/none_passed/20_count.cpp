#include<simplecpp>

main_program{

	int q,n,cs=1,count=0;
	cin>>q;
	repeat(q)
	{
		cin>>n;
		repeat(5)
		{
			switch(cs)
			{
			case 1: if(n%2==0)
				count++;
				break;
			case 2: if(n%3==0)
				count++;
				break;
			case 3: if(n%5==0)
				count++;
				break;
			case 4: if(n%7==0)
				count++;
				break;
			case 5: if(n%11==0)
				count++;
				break;
			}
			
			cs++;
		}
		cout<<count;
		count=0;
		cs=1;
	}
	
}
