#include<simplecpp>

  main_program {

  long long int n, k ;
  cin >> n >> k ;

  long long int f1 = 0, f2 = 1, i, ans, F1, F2 ;
  F1=f1 ; F2=f2 ;
  cout << 0 << endl ;
  for (i = 1; i < n; i++) {
    ans = F2 % k ;
    cout << ans << endl ;
    long long int next = F1 + F2;
    f1 = f2;
    f2 = next;
    F1 = f1 % k ;
    F2 = f2 % k ;
    }
}
