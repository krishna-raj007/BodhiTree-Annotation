#include<simplecpp>

main_program{
int n,k,f0=0,f1=1,f2,o,m=3;
cin>>n>>k;
cout<<f0%k<<endl;
cout<<f1%k<<endl;
while(m<=n-2){
f2=f1+f0;
o=f2%k;
cout<<o<<endl;
f0=f1;
f1=f2;}
}

