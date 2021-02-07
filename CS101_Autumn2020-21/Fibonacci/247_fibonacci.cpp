#include<simplecpp>

main_program{
//Write your code here
int n,k,f1=0,f2=1;
cin  >>  n  >>  k;
cout  <<  f1  <<  endl  <<   f2  <<  endl;
repeat(n-2){
  int f=(f1+f2)%k;
  cout  <<  f  <<  endl;
  f1=f2;
  f2=f;}
}
