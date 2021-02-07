#include <simplecpp>

main_program{
  long long int n, k, x = 0, y = 1, z;
  cin >> n >> k;
  cout << x % k << endl;
  cout << y % k << endl;
  for(int i = 3; i <= n; i = i + 1){
    z = y + x;
    x = y % k;
    y = z % k;
    cout << z % k << endl;
  }
}
