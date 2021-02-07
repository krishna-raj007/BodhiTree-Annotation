#include<simplecpp>
main_program{
long unsigned int n,k,f0=0,f1=1;
cin>>n>>k;
cout<<"0"<<endl<<"1"<<endl;
long unsigned int f;
for(long unsigned int i=2;i<n;i++){

f=f0+f1;
cout<<f%k<<endl;
f0=f1%k;
f1=f%k;
}
}
