#include<iostream>
//#include<conio.h>
//#include<fstream>
//#include<math.h>
//#include<iomanip>
using namespace std;
int main()
{
	int i, k;
	int n, sum=0;
	int f0 = 0, f1=1;
	cin>>n>>k;
	//cin>>k;
	for(i=0;i<n;++i)
	{
		if (i == 0)
			sum = f0;
		else if (i == 1)
			sum = f1;
		else
		{	sum = f0 + f1;
		f0 = f1;
		f1 = sum;
	}
		cout<<sum%k<<endl;
	}
	return 0;

}