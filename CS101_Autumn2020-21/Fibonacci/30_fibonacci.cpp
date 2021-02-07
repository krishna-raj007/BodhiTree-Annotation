#include<iostream>
#include<simplecpp>
using namespace std;

main_program{
  long int a,b,k,n,c;
  cin>> n >>k ;

  a=0; b=1;


  repeat(n){

  c=a+b;

  cout<<a%k;
  cout<< endl;

  a=b;
  b=c;
  }
}


