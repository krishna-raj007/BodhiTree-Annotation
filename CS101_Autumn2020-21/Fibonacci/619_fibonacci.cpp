#include<simplecpp>
main_program{
long long int n,k,fr;
cin>>n>>k ;
long long int f1=0 ,f2=1;
cout<<"0"<<endl ;
for(double i=2 ; i<=n;i++)
{fr=f1+f2 ;
cout<<fr%k<<endl ;
 long long int F=fr;
 long long int S=f1;
 f1=F;
 f2=S;}
}
