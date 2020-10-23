#include<simplecpp>

main_program{

 int n,a1,a,sum=0,sum1,maxsum;
 cin>>n;
 cin>>a1;
 repeat(n-1){
  cin>>a;
  sum=a1+a;
  maxsum=sum;
  a1=a;
  sum1=a1;
  maxsum=max(sum1,maxsum);
 }
 cout<<maxsum;
}

