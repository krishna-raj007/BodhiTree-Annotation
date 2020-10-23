#include<simplecpp>

main_program{
int q;
cin >> q;
repeat(q) {
float num1, num2, ans;
char op;
cin >> num1 >> op >> num2;
switch( op ) {
    case '+':  ans = num1 + num2;
               cout << ans << endl;
               break;
    case '-':  ans = num1 - num2;
               cout << ans << endl;
               break;
    case '/':  ans = num1 / num2;
               cout << ans << endl;
               break;
    case '*':  ans = num1 * num2;
               cout << ans << endl;
               break;
    default: cout << -1 << endl;
    }
}
}
