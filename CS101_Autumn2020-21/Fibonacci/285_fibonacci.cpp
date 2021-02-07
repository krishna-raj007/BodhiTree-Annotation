#include<simplecpp>
main_program
{
	unsigned long long t1=0, t2 = 1, n, k, t;
	cin >> n >> k;
	if (n==1)
	{
        cout << t1 % k<<endl;
	}
	if (n==2)
	{
		cout << t1 % k<<endl<< t2 % k<< endl;
	}
    if (n >2) 
    {
    	cout << t1 % k << endl << t2 % k << endl;
        for (int i=1; i <= (n-2); i= i+1)
	    {
	    	
		    t = (t1 + t2)%k;
		    cout << t << endl;
		    t1=t2;
		    t2=t;
	    }
	}


}