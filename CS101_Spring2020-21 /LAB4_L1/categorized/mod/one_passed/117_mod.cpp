#include <simplecpp>

main_program{
  int s, n=1, i=1, m=1;
  cin >>s>>m;

  repeat(s){
    n = n * i;
    i = i + 1;
  }
  cout <<n%m<< endl;
}
