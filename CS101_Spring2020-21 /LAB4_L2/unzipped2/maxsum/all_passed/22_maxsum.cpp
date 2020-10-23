#include<simplecpp>

main_program{

  int n;
  long long int a, b, s, S;
  cin >> n;

  cin >> a >> b;
  S= a+b; s = b;
  repeat (n-2){
    long long int c;
    cin>> c;
    S = max(S,s+c);
    s=c;
  }
  cout << S;
}
