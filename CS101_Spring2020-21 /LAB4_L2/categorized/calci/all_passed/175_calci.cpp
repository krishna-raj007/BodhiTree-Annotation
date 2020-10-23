#include<simplecpp>

main_program{
   char operation;
   double Num1 , Num2 ;
 int Q;
 cin>>Q;
repeat(Q)
{cin>>Num1>>operation>>Num2;
switch(operation){
        case '+' : cout<<Num1 + Num2 <<endl;
        break;
        case '-' : cout<<Num1 - Num2<<endl;
        break;
        case '*' : cout<<Num1 * Num2 <<endl;
        break;
        case '/' : cout<<Num1 / Num2 <<endl;
        break;
        default  : cout <<"-1"<<endl;

}
}

}
