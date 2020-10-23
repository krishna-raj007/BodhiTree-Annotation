#include<simplecpp>

main_program{
long int n,a=0;
cin>>n;
double result,p,sum=0.0;
repeat(n+1){
  p = pow(-1,a);
  sum = sum + p*1/(2*a+1);
  a++;
}
result = sum*4;
cout<<result;
}
