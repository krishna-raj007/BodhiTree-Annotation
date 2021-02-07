#include<simplecpp>

main_program{
int n,k;
cin>>n>>k;
long unsigned int f0,f1,f2;

f0=0;
f1=1;
cout<<f0<<"\n"<<f1<<"\n";

repeat(n-2){
    f2=f1+f0;
    f2=f2%k;
    cout<<f2<<"\n";
    f0=f1;
    f1=f2;
    }
}
