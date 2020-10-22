#include<simplecpp>

main_program{
int n;
long int m;
int i;
long int x;
cin>>n >>m;
i=1;
x=1;
repeat(n){
          x=x*i;
          i=i+1;
          }
cout<<x%m;
}
