#include<simplecpp>

main_program{
float num1,num2;
char oper;
int q;
cin>>q;
repeat(q){
cin>>num1>>oper>>num2;
    switch(oper){
            case '+' : cout<<num1+num2<<endl;break;
            case '-' : cout<<num1-num2<<endl;break;
            case '*' : cout<<num1*num2<<endl;break;
            case '/' : cout<<num1/num2<<endl;break;
            default : cout<<-1<<endl;
        }
    }
}
