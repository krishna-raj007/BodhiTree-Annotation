#include<simplecpp>
main_program{
int f0=0,f1=1,f2,i,n,k;
cin>>n>>k;
cout<<f0<<" "<<f1<<" ";
for(i=2;i<n;++i){
f2=f0+f1;
cout<<f2%k<<" ";
f0=f1;
f1=f2;
}
}
