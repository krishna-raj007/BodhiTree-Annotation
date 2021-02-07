#include<simplecpp>

main_program{
  long int f0=0, f1=1, f2, n, k;
  cin >> n >> k ;
  cout << f0 <<"\n" << f1%k <<endl;
  repeat(n-2){
    f2 = ((f0%k) + (f1%k))%k;
    cout << f2 << endl;
    f0 = f1;
    f1 = f2;
  }
}
