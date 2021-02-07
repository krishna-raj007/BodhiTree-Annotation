#include<simplecpp>

main_program{
long long int n,k,f0=0,f1=1,f;cin>>n>>k;
cout<<f0<<"\n"<<f1<<"\n";
repeat(n-2){
f=(f0%k+f1%k)%k;
cout<<f<<"\n";
f0=f1;
f1=f;}



}
