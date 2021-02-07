#include <simplecpp>

main_program{

long long n;
long long k;
cin>>n>>k;

long long fback=0;
cout<<fback<<"\n";
long long ffront=1;
cout <<ffront<<"\n";

long long f;

for (long long i = 1; i <=n-2; ++i)
{
	f=((fback%k)+((ffront)%k))%k;
	cout <<(((f)))<<"\n";
	fback=ffront;
	ffront=f;

}












}