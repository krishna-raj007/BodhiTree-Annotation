#include<simplecpp>

main_program{

	int n;
	cin>>n;
	long int a[n];
	int i = 0;
	repeat(n)
	{
        cin>>a[i];
        i++;
	}
	long int maxSum = a[0]+a[1];
	for(int j = 1; j<n-1; j++)
	{
        if(a[j] + a[j+1] >= maxSum)
        {
            maxSum = a[j] + a[j+1];
        }
	}
	cout<<maxSum;

}
