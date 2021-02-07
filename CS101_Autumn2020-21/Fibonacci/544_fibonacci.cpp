#include<iostream>
using namespace std;
int main()
{
	
	int n, k, F1=0, F2=1;
	
	cout << "Enter the number of terms of Fibonacci Series you want to printed: ";
	cin >> n;
	
	cout << "\nFibonacci Series of " << n << " terms: " << endl;
	
	for (int i=0; i<n; i++)
	{
		
		cout << F1 << endl;
		k=F1+F2;
		F1=F2;
		F2=k;
		
	}
	
}