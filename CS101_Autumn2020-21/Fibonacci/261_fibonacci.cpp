#include<simplecpp>

main_program{
long int k ,var;
cin>>var>>k;
long int n1 = 0,n2 = 1, next;
for(long int i = 1; i <= var; ++i){

  n1 = n1 % k;
  cout<<n1<<endl;
  next = n1;
  n1 = n2;
  n2 = n2 + next;
}
}
