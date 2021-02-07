#include<simplecpp>

main_program{
  long long int n, k, fa=0, fb=1, fi, i=1;
  cin >> n >> k;
  cout << 0%k << endl;
  cout << 1%k << endl;
  while(i < n-1){
   fi =  fa%k + fb%k;
   cout << (fi)%k << endl;
   fa = fb%k; fb = fi%k;
   i = i+1;
  }
}
