#include<simplecpp>

main_program{

//Program to display Fibonacci numbers % k

long int x1 = 0, x2 = 1;   //Setting 1st 2 terms
long int s = 0;
long int n, k;

cin >> n >> k;       //Inputting n = no. of terms, k = denominator

cout << x1 << endl << x2 << endl;

long int i = n-2;

while (i>0){
  i--;
  s = x2 + x1;
  s = s%k;
  x1 = x2;
  x2 = s;
  cout << s%k << endl;
}

}
