#include<simplecpp>

main_program{
  long int n,m,k=1,p=1;
  cin>>n>>m;
  repeat(n){
   p=((p%m)*(k%m))%m;
   k++;
   }
  cout<<p;

}
