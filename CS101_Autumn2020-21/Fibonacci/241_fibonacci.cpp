#include<simplecpp>

main_program{
long long int k,F0=0, F1=1,fx=F0, fy=F1, f=0, n,mod,i; cin>>n>>k; cout<<"0"<<endl<<"1"<<endl;
for(i=3;(i<=n)&&(n>=1)&&(n<=10e5)&&(k>1)&&(k<=10e5); i++){
f=fx+fy;
mod=f%k;
fx=fy;
fy=f;
cout<<mod<<endl;
}

}
