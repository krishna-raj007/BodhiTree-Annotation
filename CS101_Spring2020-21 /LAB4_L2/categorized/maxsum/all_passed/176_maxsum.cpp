#include<simplecpp>

main_program{

long int a,b,s,n,maxsum=-1;
cin>>n;
cin>>a;
repeat(n-1){
cin>>b;
s=a+b;
maxsum=max(s,maxsum);
a=b;



}
cout<<maxsum;
}
