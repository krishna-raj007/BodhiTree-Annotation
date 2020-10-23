#include<simplecpp>

main_program{

 int n;
 long long int a,b,sum,maxsum=0;
 cin>>n;
 cin>>a;

 repeat(n-1){
  cin>>b;
  sum=a+b;
  a=b;
  maxsum=max(sum,maxsum);
 }

 cout<<maxsum;
}
