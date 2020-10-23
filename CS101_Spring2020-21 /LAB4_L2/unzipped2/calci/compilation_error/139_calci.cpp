#include<simplecpp>

main_program{
float num1,num2;
int q;
char op;
cin>>num1;
cin>>num2>>q;
repeat(q)
{
    switch(op)
        {case '+':cout<<num1+num2<<endl;
        break;
        case '-':cout<<num1-num2<<endl;
        break;
        case '*':cout<<num1*num2<<endl;
        break;
        case '/':cout<<num1/num2<<endl;
        break;
         case '%':cout<<num1%num2<<endl;
        break;
        }
}
}
