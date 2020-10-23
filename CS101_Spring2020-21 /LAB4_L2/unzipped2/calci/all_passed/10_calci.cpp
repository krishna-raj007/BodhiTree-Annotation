#include<simplecpp>

main_program{
int Q;
float Num1, Num2, calctd;
char Operator;
cin>>Q;
repeat(Q){
cin>>Num1>>Operator>>Num2;
switch(Operator){
case '+': calctd = Num1 + Num2;
        break;
case '-': calctd = Num1 - Num2;
        break;
case '/': calctd = Num1 / Num2;
        break;
case '*': calctd = Num1 * Num2;
        break;
default : calctd = -1;
        break;
}
cout<<calctd<<endl;
}
}

