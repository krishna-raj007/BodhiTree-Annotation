#include<simplecpp>

main_program{

long int num,a,b,c,d,sum2,sum1,temp;
cin>>num>>a>>b;

sum1=a+b;
d = sum1;
repeat(num-2){

  cin>>c;
  sum2=b+c;
  temp = max(sum2,sum1);
  a=b;
  b=c;
  sum1=a+b;
  d=max(d,temp);
  }

  cout<<d;
}
