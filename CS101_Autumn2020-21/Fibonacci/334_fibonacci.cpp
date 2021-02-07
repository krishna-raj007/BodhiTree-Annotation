#include<simplecpp>

main_program{
int f,fn,fn1,fn2,n,k;
cin>>n>>k;
fn2=0;
fn1=1;
repeat(n){
fn=fn1+fn2;
f=fn2%k;
fn2=fn1;
fn1=fn;
cout <<f<<"\n";
}
}
