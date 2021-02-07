#include<simplecpp>

main_program{
  long long unsigned int n, k, t, t1=1, t2=0;
  cin >> n >> k;
  if(n>1){
    cout << 0 << endl << 1 << endl;
    repeat(n-2){
      t = ((t1%k)+(t2%k))%k;
      cout << t << endl;
      t2 = t1;
      t1 = t;
    }
  }
  else if(n==1) cout << 0;
}
