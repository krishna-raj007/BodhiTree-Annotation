#include<simplecpp>

main_program{
    int A;
    float Num1, Num2, calctd;
    char Operator;
    cin>>A;
    repeat(A){

    cin>>Num1>>Operator>>Num2;
    switch(Operator){
     case '+' :calctd = Num1 + Num2;
                break;
    case '-' :calctd = Num1 - Num2;
                break;
     case '*' :calctd = Num1 * Num2;
                break;
     case '/' :calctd = Num1 / Num2;
                break;
    default : calctd = -1;
                break;
    }

    cout<<calctd<<"\n";

    }

    }
