#include<simplecpp>

main_program{
int Q;
cin>>Q;
float Num1,Num2;
char command;
repeat(Q){
cin>>Num1>>command>>Num2;

switch(command){
    case '+': cout<<Num1+Num2<<endl;
    break;
    case '-' : cout<<Num1-Num2<<endl;
    break;
    case '*': cout<<Num1*Num2<<endl;
    break;
    case '/' : cout<<Num1/Num2<<endl;
    break;
    default: cout<<"-1"<<endl;
}
}

}
