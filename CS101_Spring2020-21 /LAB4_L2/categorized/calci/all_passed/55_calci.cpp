#include<simplecpp>
main_program{
int Q;
cin>>Q;
char operator1;
float num1,num2;
repeat(Q)
{
    cin>>num1>>operator1>>num2;
    switch(operator1)
    {
        case '+' : cout<<num1+num2<<"\n";break;

        case '-': cout<<num1-num2<<"\n";break;

        case '*' : cout<<num1*num2<<"\n";break;

        case '/' : cout<<num1/num2<<"\n";break;

        default :cout<<"-1"<<"\n";break;
    }
}
}
