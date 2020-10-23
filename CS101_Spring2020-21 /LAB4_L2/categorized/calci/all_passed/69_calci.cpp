
#include<simplecpp>

main_program{
int q;
char op;
float num1,num2,c;
cin>>q;
repeat(q)
{
    cin>>num1>>op>>num2;
    switch (op)
    {
    case '+':
        c=num1+num2;
        break;
    case '*':
        c=num1*num2;
        break;
    case '-':
        c=num1-num2;
        break;
    case '/':
        c=num1/num2;
        break;
    default:
        c=-1;
    }
    cout<<c<<"\n";
}



}
