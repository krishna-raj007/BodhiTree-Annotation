#include<simplecpp>
main_program{
unsigned long long int F0=0,F1=1,F2,i,n,k;
cin>>n>>k ;
cout<< F0%k<<endl<<F1%k<<endl;
for(i=1;i<=n-2;i++)
{F2=(F0+F1)%k;
cout<<F2%k<<endl;
F0=F1;
F1=F2;}
}
