#include<simplecpp>

main_program{
   int n, k, a=0, b=1, r, v;
   cin >> n >> k;
   cout << a << endl;
   while(n>=2){
      v = b % k;
      cout << abs(v) << endl;
      r = b;
      b = a + b;
      a = r;
      n--;
   }
}
