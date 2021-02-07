#include<simplecpp>

main_program{
//Write your code here
long long int l, fa, fb, k, n;
fa = 0;
fb = 1;
long long int i = 0;
cin >> n >> k;
while(i<n && n >= 1 && n <= 1e5 && k > 1 && k <=1e5){
  i++;
  cout << fa%k << endl;
  l = fa;
  fa = fa + fb;
  fb = l; }
}
