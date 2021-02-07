#include<simplecpp>

main_program{
long long int n,k;
cin>>n>>k;
long long int fn=0,fn1=0,fn2=1;
cout<<"0"<<endl<<"1"<<endl;
repeat(n-2)
{
fn=(fn1%k+fn2%k)%k;
cout<<(fn%k)<<endl;
fn1=fn2;
fn2=fn;
}




}
