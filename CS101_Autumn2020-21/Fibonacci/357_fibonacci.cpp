#include <simplecpp>

main_program{
  long long unsigned int n, k, l = 0, m = 1, t;
  cin >> n >> k;
  if(n == 1)cout << "0";
  else{
  cout << "0" << endl << "1" << endl;
  repeat(n-2){
    t = l + m;
    cout << t%k << endl;
    l = m;
    m = t;
  }
  }
}
