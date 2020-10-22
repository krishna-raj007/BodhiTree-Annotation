#include<simplecpp>

main_program{

	//Write your code here

long int n,m;cin >>n>>m;
long int fac,i;
fac=1,i=1;
repeat(n){
  fac=fac*i;
  fac=fac%m;
  i=i+1;}
  cout << fac<< endl;


}
