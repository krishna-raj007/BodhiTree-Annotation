#include<simplecpp>

main_program{
  int n, k;
  cin >> n >> k;
  int i;
  int f0 = 0, f1 = 1;
  long long int a = f0, b = f1;
  if(n>=2){
    cout << a << endl << b << endl;
    for(i = 1; i <= n-2; i+=1){
      cout << (a+b)%k << endl;
      long long int r = b%k;
      b = a%k + b%k;
      a = r;
    }
  }
  else cout << a%k;
}
