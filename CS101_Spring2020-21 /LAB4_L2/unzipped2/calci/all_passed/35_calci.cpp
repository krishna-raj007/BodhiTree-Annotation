#include<simplecpp>

main_program{

    int Q;
    cin>>Q;
    repeat(Q)
    {
        float Num1 = 0;
        float Num2 = 0;
        char Operator;
        cin>>Num1>>Operator>>Num2;
        switch(Operator)
        {
        case '+':
            cout<<Num1 + Num2<<endl;
            break;
        case '-':
            cout<<Num1 - Num2<<endl;
            break;
        case '*':
            cout<<Num1 * Num2<<endl;
            break;
        case '/':
            cout<<Num1 / Num2<<endl;
            break;
        default:
            cout<<"-1"<<endl;
        }
    }
}

