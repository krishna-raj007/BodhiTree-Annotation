#include<simplecpp>

main_program{
int n,m;
long int T1=0,T2=1,nT=0;
cin>>n>>m;
for(int i=1;i<=n;i++)
{
if(i==1){
cout<<T1<<endl;
continue;
}
if(i==2){
cout<<T2<<endl;
continue;
}
nT=T1+T2;
T1=T2;
T2=nT;
double x=nT%m;
cout<<x<<endl;
}
}
