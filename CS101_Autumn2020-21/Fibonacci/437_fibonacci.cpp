#include<simplecpp>

main_program{
//fibonacci
  int n, k;
  cin >> n >> k;
  long int x=0, X=1;
  cout << x << endl << X << endl;
  repeat(n-2){
    X = (X%k + x%k)%k;
    if(X%k>=0){
    cout << X%k << endl;}
    else
      cout << X%k + k << endl;
    x = (X-x)%k;
  }
}
