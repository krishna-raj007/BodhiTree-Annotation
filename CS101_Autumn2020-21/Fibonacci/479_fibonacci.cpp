#include<simplecpp>

main_program{

long int n;
long int k;
long int f1=1;
long int f0=0;

cin>> n>> k;

repeat (k-1)
 {
  long int f2;

  f2= f1+f0;

  cout<< f2%k << endl;

  long int f1;
  long int f0;

  f1=f2;
  f0=f1;

 }
}
