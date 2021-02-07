#include<simplecpp>

main_program{
long int n,k,f0=0,f1=1,fn;cin>>n>>k;
cout<<f0%k<<endl;
cout<<f1%k<<endl;
repeat(n-2){
 fn=((f0)%k+(f1)%k)%k;
 cout<<fn<<endl;
 f0=f1;
 f1=fn;
 }

 }
