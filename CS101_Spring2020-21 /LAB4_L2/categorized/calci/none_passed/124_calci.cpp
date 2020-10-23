#include<simplecpp>

main_program{
int n;
float num1,num2;
char op;
cin>>n;
repeat(n){
cin>>num1>>op>>num2;
switch(op){
    case '+':
    cout<<num1+num2;break;
    cout<<"\n";
    case'-':
    cout<<num1-num2;break;
    cout<<"\n";
    case '*':
    cout<<num1*num2;break;
    cout<<"\n";
    case '/':
    cout<<num1/num2;break;
    default :
        cout<<"-1";



}}


}
