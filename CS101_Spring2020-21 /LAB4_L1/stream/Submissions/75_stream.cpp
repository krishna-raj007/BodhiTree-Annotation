#include<simplecpp>

main_program{

  int x;
  int maximum = 0;
  while ( x != -1){
    maximum = max(x, maximum);
    cin >> x;

  }
  cout << maximum;
}
