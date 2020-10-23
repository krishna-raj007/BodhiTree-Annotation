#include<simplecpp>

main_program{
    int n,maxi=0,b;
	cin>>n;
	int a[n],sum=0;
	int i=0;
	repeat(n)
	{
      cin>>a[i];
      i++;
	}
	int j=0;
    repeat(n-1)
    {
      b=maxi;
      sum=a[j]+a[j+1];
      j++;
      maxi=max(sum,b);
    }

    cout<<maxi;
}
