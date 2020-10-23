#include<simplecpp>

main_program
{
char op;
float num1,num2;
cin >> num1 >> op >> num2;
 switch(op)
 {
  case '+':
  cout << num1+num2;break;
  case '-':
  cout << num1-num2;break;
  case '*':
  cout << num1*num2;break;
  case '/':
  cout << num1/num2;break;
  default:
  cout << "-1";
 }
 return 0;
}
