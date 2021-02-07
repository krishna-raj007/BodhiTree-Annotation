#include<simplecpp>

main_program{
  int n,t0= 0,t1 = 1,ti = 0;
  cin >> n;
  cout << "0" << endl;
  cout << "1" << endl;
  for (int i = 1; i <= n; i=i+1){
  ti = t0 + t1;
  t0 = t1;
  t1 = ti;
  cout << ti << endl;
}
}
