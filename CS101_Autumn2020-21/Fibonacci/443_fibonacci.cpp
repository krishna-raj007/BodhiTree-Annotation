#include<simplecpp>

main_program{
  long long unsigned int n,k;
  cin >> n >> k;
  int f0=0,f1=1,t1=0; cout << f0%k << endl << f1%k << endl;
  for (int i=1;i<=n-2;i++){
    t1=f0+f1;
    cout << t1%k << endl;
    f0=f1;f1=t1;
    }
}
