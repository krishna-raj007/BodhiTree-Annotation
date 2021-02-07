#include<simplecpp>

main_program{
int n,k;
cin >> n >> k ; 1<=n<=1e5; 1<k<=1e5;
int f0=0, f1= 1;
cout << f0 << endl ;
for(
int m=f0+f1;
m<=n;m++
)
{cout <<f1%k << endl;
int y=f1;f1=f1+f0; f0=y;
 }
}
