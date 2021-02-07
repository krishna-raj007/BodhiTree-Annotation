#include<simplecpp>

main_program{
int f1=1, f0=0;
long long int n,k ;
cin>>n;
cin>>k;
cout<<f0<<endl;
cout<<f1<<endl;
repeat(n-2)
{long long int f2;
f2=abs(f1+f0);
f0=f1;
f1=f2;

cout<<f2%k<<endl;
}
}
