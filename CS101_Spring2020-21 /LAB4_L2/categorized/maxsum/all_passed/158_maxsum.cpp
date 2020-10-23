#include<simplecpp>

main_program{

double n, maximum=0, a, b;
cin>>n;
cin>>a;
b = a;
repeat (n-1){
  cin>>a;
  double c = a+b;
  b = a;
  maximum = max(c, maximum);
}
cout<<maximum;
}
