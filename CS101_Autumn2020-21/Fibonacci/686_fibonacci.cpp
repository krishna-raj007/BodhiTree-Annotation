#include<simplecpp>
/* Author: Preethi
Project: Fibonacci*/

main_program{
int n,k;
cin>>n>>k;
cout<<"\n";
int F0=0,F1=1;
repeat(n){
    cout<<(F0%k)<<"\n";
    int a=F0;
    F0=(F0%k)+(F1%k);
    F1=a;
}
}
