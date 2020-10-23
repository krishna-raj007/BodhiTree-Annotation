#include<simplecpp>

main_program{

int n;
cin>>n;
int sum,maxsum,term;
sum=0;
maxsum=0;
term=0;

repeat(n){
int a;
cin>>a;

sum=term+a;
maxsum=max(maxsum,sum);

term=a;}

cout<<maxsum;



}













