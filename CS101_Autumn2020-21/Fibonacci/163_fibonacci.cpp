#include<simplecpp>

main_program{
//Fibonacci series
  long long int n,k; cin >> n >> k;
  if((n>=1) && (n<=100000) && (k>1) && (k<=100000)){
    long long int x0 = 0, x1 = 1, x2;
    cout << x0 <<endl;
    cout << x1 <<endl;
    for(int m=1; m<=n-2; m++){
      x2 = (x0%k + x1%k)%k;
      cout << x2 << endl;
      x0=x1;
      x1=x2;
    }
  }
}
