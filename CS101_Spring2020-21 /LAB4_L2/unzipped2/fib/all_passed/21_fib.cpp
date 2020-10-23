#include<simplecpp>

main_program{

  long long int n, s=0, S=1;
  cin >> n;
  long long int i=1;
  while ( S <= n){
    if ( S==n){
        cout << i;
        break;
    }
    long long int c;
    c = S;
    S=S+s;
    s=c;
    i++;

  }
  if ((S > n)&&(n!=0))cout <<"-1";
  if (n==0)cout << "0";
}
