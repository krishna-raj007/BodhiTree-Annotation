#include<simplecpp>

main_program{
//Write your code here
  int f0= 0, f1 = 1, i, n, k;
  cin >> n>>k;
  cout << f0 << endl;
  int nextterm=0;
  for (i = 1; i < n; i++) {
    cout << f1%k << endl;
    nextterm = f0 + f1;
    f0 = f1%k;
    f1 = nextterm%k;
    }

}
