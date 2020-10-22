#include<simplecpp>

main_program{
  long int n,m,s=1,i=1;
  cin>> n;
  cin>> m;
  while(i<=n){
    s=((s%m)*(i%m))%m;
    i++;


  }
  cout<< s%m;

}
