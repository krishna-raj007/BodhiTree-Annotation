#include<simplecpp>

main_program{
int n,k;
cin>>n>>k;
int F0=0,F1=1,F2;
repeat(n){


cout<<(F0)<<endl;F2=F1+F0;F0=F1%k;
F1=F2%k;}
wait(20);
}
