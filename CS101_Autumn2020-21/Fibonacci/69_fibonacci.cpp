#include<simplecpp>
main_program
{
long int n,t0=0,t1=1,t,k;
cin>>n>>k;
cout<<t0 % k<<endl<<t1 % k<<endl;
for(int i =3;i <=n; i++)
{t = t0 + t1;
 cout<<t % k<<endl;
 t0 = t1;
 t1 = t;
}
}
