#include<simplecpp>
main_program{
  int n, k, f=0, a=1, b, r;
  cin>> n>> k;
  cout<< f << endl;
  repeat(n-1){
    b=f;
    f = f + a;
    a=b;
    r = f%k;
    cout<< r << endl;
  }
}
