#include<simplecpp>
main_program{

  int n, k;
  cin >> n >> k;

  long long int F0 = 0, F1 = 1, F2;
  cout << F0 << endl;

  if (n >= 2)
    cout << F1%k << endl;

  for (int i = 2; i < n; i = i + 1){
    F2 = F0 + F1;
    F0 = F1;
    F1 = F2;

    if (F2%k >= 0)
      cout << F2%k << endl;
    else
      cout << k + F2%k << endl;
  }
}
