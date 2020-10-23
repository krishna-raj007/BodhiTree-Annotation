#include<simplecpp>
main_program{
float num1,num2;
int n;
char op;
cin>>n;
repeat(n){cin>>num1>>op>>num2;
       switch(op){
          case '+':
          cout<<num1+num2<<"\n";break;

          case '-':
          cout<<num1-num2<<"\n";break;
          case '*':
          cout<<num1*num2<<"\n";break;
          case '/':
          cout<<num1/num2<<"\n";break;

        default:cout<<"-1";}}
}
