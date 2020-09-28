#include <simplecpp>

main_program{

 long int n,nu;
 int m,rem=1;
 cin>>n>>m;
 nu=n;

 repeat(nu-1){

     rem*=n%m;
     rem%=m;
     n--;
  }
  cout<<rem;
 }



