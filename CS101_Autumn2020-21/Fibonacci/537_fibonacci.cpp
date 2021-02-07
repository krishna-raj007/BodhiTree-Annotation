#include<simplecpp>

main_program{
long long int n,k,i;
long long int f0=0,f1=1,f2;
cin>>n>>k;
if(n==1) cout<<f0;
if(n>=2)cout<<f0<<endl<<f1<<endl;
for(i=2;i<n;i++){
f2=(f1+f0)%k;
cout<<f2<<endl;f0=f1;f1=f2;
}
}
