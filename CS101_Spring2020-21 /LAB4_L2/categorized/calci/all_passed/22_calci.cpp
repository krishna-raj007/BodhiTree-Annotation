#include<simplecpp>

main_program{

  int Q;
  cin >> Q;

  float Num1, Num2, ans;
  char command;

  repeat(Q){
    cin >> Num1 >> command >> Num2;
    switch(command){
      case '+' : ans = Num1 + Num2;
                 break;
      case '-' : ans = Num1 - Num2;
                 break;
      case '*' : ans = Num1 * Num2;
                 break;
      case '/' : ans = Num1 / Num2;
                 break;
      default  : ans = -1;
    }
    cout << ans << endl;
  }
}
