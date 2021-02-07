#include<simplecpp>

main_program{
//Fibonacci

long long int n,k,f0, f1; cin>> n>> k;

 f0=0, f1=1;
  cout <<f0 <<endl;
  cout <<f1 <<endl;

repeat(n-2){
 long long int f2; f2=(f0+f1)%k;
 cout <<f2 <<endl;

 f0=f1;
 f1=f2;
 }


}
