// #include <simplecpp>

// main_program {

// 	int n, k;
// 	cin >> n >> k;

// 	cout << 0 << endl;
// 	if (n > 1) cout << 1 << endl;

// 	int prev = 0, curr = 1, temp;

// 	repeat(n-2) {
// 		temp = curr;
// 		curr += prev;
// 		curr %= k;
// 		prev = temp;
// 		cout << curr << endl;
// 	}


// }

#include<simplecpp>

main_program
{
int n,k,a=0,b=1;
cin>>n>>k;

 if(n==1)
{
cout<<a;
}

 else if(n==2)
{
cout<<a<<endl<<b<<endl;
}
else
{
for(int i=0;i<(n-2);i++)
{
int sum=a+b;
a=b;
b=sum%k;
cout<<sum%k<<endl;
}
}
}