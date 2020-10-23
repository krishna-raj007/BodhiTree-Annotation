#include<simplecpp>

main_program{

int n;
int a;
int b;
cin>>n>>a>>b;
int sum1 = a+b;
int sum2 = 0;
repeat(n-2){
cin>>a;
sum2 = a+b;
sum1 = (max(sum1,sum2));
b=a;
}
cout<<sum1;
}
