#include<simplecpp>



main_program{
int  f0=0,f1=1,fn,n,k,s;
cin>>n>>k;
cout<<f0<<"\n"<<f1<<"\n";
for(int i=2;i<n;i=i+1){
fn=f0+f1;
s=fn%k;
cout<<s<<"\n";
f0=f1;
f1=fn;


}
cout<<endl;


}
