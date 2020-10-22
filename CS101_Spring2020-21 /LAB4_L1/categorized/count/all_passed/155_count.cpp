#include<simplecpp>

main_program{
 int n;
 cin >> n;

int a=2, b=3, c=5, d=7, e=11;



repeat(n){
  int A;
  cin >> A;
  int i=0;

  if(A % a == 0) i= i+1;

  if(A % b == 0) i= i+1;

  if(A % c == 0) i= i+1;

  if(A % d == 0) i= i+1;

  if(A % e== 0)  i= i+1;

  cout << i <<endl;


  }
}
