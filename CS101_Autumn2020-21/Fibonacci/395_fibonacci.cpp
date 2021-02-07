#include <simplecpp>
main_program{

// program fibonacci modulo (print the fibbonacci term's mod k values.)

int n, k;
cin >> n >> k;

long long int a=0, b=1, c=a+b;

cout<< a%k << endl;
cout<< b%k <<endl; //print the first 2 output terms here

for(int i=1; i<=n-2; i++) //now enter loop
{
  cout<< c%k << endl;
  // c will continue the series now.
  a=b;
  b=c%k;
  c= a+b; //c gets further term.
}

}
