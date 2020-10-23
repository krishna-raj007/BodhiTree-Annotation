#include<simplecpp>

main_program{

  int n;
  cin >> n;

  int i=0, j=2, P=-1;
  double T, S=0;

  repeat(n+1){
    P = P *(-1);
    T = P*(1.0/(2*i+1));
    S = S + T;
    i++;
  }
  cout << 4*S;
}
