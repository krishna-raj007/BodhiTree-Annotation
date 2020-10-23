#include<simplecpp>

main_program{
 int n;
 long long int a,b;
 cin>>n;
 cin>>a>>b;
 long long int sum = a+b,x;
 repeat(n-2){
  cin>>a;
  x = a + b;
  if(x > sum)
   sum = x;
  b = a;
 }
cout<<sum;
}
