#include <simplecpp>

main_program{
  long int n,k;
  cin >> n >> k;
  long long int f0 = 0, f1 = 1;
  cout << f0 << " ";

  for(int x=1; x<n; x++){
    cout << f1 <<  " ";
    int y = (f0 + f1)%k;
    f0 = f1;
    f1 = y;
  }

}
